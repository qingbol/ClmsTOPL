// #include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"

const Literal* PrintNode::eval() const{
  if (!print_node_) return nullptr;
  print_node_->eval()->print();
  return nullptr;
}

const Literal* FunctionNode::eval() const {
  ScopeManager::GetInstance().set_function(function_name_, function_body_);
  return nullptr;
}

void SuiteNode::set_suite_stmts(Node* i) {
  suite_stmts_.push_back(i);
}

const Literal* SuiteNode::eval() const {
  if (suite_stmts_.empty()) {
    return nullptr;
  } else {
    for (const Node* n : suite_stmts_) {
      if (n) {
        n->eval();
        if (ScopeManager::GetInstance().CheckVariable("__RETURN__")) {
          return ScopeManager::GetInstance().get_variable("__RETURN__");
        } 
      } else {
        throw std::string("This function body is empty");
      }
    }
    return nullptr;
  }
}

const Literal* CallNode::eval() const {
  ScopeManager& sm = ScopeManager::GetInstance();
  if (!sm.CheckFunction(identifier_)) {
    std::exception up = std::exception();
    throw up;
  }
  sm.PushScope();
  sm.get_function(identifier_)->eval();
  sm.PopScope();
  return nullptr;
}
 
const Literal* ReturnNode::eval() const {
  if (!return_node_) {
    const Literal* res = new IntLiteral(0);
    PoolOfNodes::getInstance().add(res);
    ScopeManager::GetInstance().set_variable(return_name_, res);
    return 0;
  }
  const Literal* res = return_node_->eval();
  res->print();
  ScopeManager::GetInstance().set_variable(return_name_, res);
  return res;
}

const Literal* IdentifierNode::eval() const { 
  const Literal* val;
  try{
    // val= SymbolTable::getInstance().getValue(ident);
    val = ScopeManager::GetInstance().get_variable(identifier_);
  }
  catch (const std::string& msg) {
    std::cout << "MSG is " << msg << std::endl; 
  }
  return val;
}

const Literal* IfNode::eval() const {
  if (!test_) return nullptr;
  const Literal* lit = test_->eval();
  // std::cerr << "test value is " << test_->eval()->get_value() << std::endl;
  if (!lit) throw std::string("test boolean operator is invalid");

  if (lit->get_value()) {
    if_suite_->eval();
  } else if (elif_vector_) {

  } else if (else_suite_) {
    else_suite_->eval();
  }
  return nullptr;
}

const Literal* StringNode::eval() const { 
  const Literal* val;
  try{
    val= new StringLiteral(str_);
    // val= SymbolTable::getInstance().getValue(str_);
  }
  catch (const std::string& msg) {
    std::cout << "MSG is " << msg << std::endl; 
  }
  return val;
}

AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  // const Literal* res = right->eval();
  // const std::string n = static_cast<IdentifierNode*>(left)->get_identifier();
  // SymbolTable::GetInstance().setValue(n, res);
  //std::cout<<" right eval in the node is "<<std::endl;
  //right->eval()->print();
  //std::cout<<"value has been assigned";
}

const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentifierNode*>(left)->get_identifier();
  ScopeManager::GetInstance().set_variable(n, res);
  //std::cout<<" right eval in eval() "<<std::endl;
  //right->eval()->print();
  return res;
}

const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  //return (*x+*y);
  return (*x).operator+(*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}

const Literal* PctBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}

const Literal* DbStarBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)^(*y));
}

const Literal* DbSlashBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).DbSlash(*y);
}



/*const Literal* MiusUnaryNode::eval() const { 
  if (!node) {
    throw "error";
  }
  const Literal* x = node->eval();
  return x->MiusOp();
}
*/

const Literal* LessBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).Less(*y);
}

const Literal* GreaterBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).Greater(*y);
}

const Literal* EqualEqualBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  // std::cerr << "x value is " << x->get_value() <<std::endl;
  // std::cerr << "y value is " << y->get_value() <<std::endl;
  return (*x).EqualEqual(*y);
}

const Literal* GreaterEqualBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).GreaterEqual(*y);
}

const Literal* LessEqualBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).LessEqual(*y);
}

const Literal* NotEqualBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).NotEqual(*y);
}
