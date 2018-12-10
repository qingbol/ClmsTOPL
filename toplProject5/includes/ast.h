#pragma once

//  Declarations for a calculator that builds an AST
//  and a graphical representation of the AST.
//  by Brian Malloy

#include <iostream>
#include <string>
#include <map>
#include "literal.h"
#include "scopeManager.h"


extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class PrintNode : public Node {
 public:
  PrintNode(Node* n) : Node(), print_node_(n){}
  PrintNode(const PrintNode&) = delete;
  PrintNode& operator=(const PrintNode) = delete;
  virtual ~PrintNode() {}
  Node * get_print_node() const {
    return print_node_;
  }
  virtual const Literal* eval() const;
 protected:
  Node* print_node_;
};

class IdentifierNode : public Node {
 public:
  IdentifierNode(const std::string id) : Node(), identifier_(id) { } 
  virtual ~IdentifierNode() {}
  const std::string get_identifier() const { return identifier_; }
  virtual const Literal* eval() const;
 private:
  std::string identifier_;
};

class FunctionNode : public Node {
 public:
  FunctionNode(const std::string id, Node* stmts) 
      : Node(), function_name_(id), function_body_(stmts) {}
  FunctionNode(const FunctionNode&) = delete;
  FunctionNode& operator=(const FunctionNode&) = delete;
  virtual ~FunctionNode() {}
  const std::string get_function_name() const {return function_name_;}
  virtual const Literal* eval() const;
 private:
  std::string function_name_;
  Node* function_body_;
};
 
class SuiteNode : public Node {
 public:
  SuiteNode() : Node(), suite_stmts_() {}
  void set_suite_stmts(Node* i);
  virtual ~SuiteNode() {}
  virtual const Literal* eval() const;
 private:
  std::vector<Node*> suite_stmts_;
};

class CallNode : public Node {
 public:
  CallNode(const std::string id) : Node(), identifier_(id) {}
  virtual const Literal* eval() const;
  virtual ~CallNode() {}
  const std::string get_identifier() const {
    return identifier_;
  }
 private:
  std::string identifier_;
};

class ReturnNode : public Node {
 public:
  ReturnNode(Node* return_node, std::string return_name = "__RETURN__") 
      : Node(), return_node_(return_node), return_name_(return_name) {}
  ReturnNode(const ReturnNode&) = delete;
  const ReturnNode& operator=(const ReturnNode& ret) = delete;
  virtual ~ReturnNode() {}
  virtual const Literal* eval() const;
 private:
  Node* return_node_;
  std::string return_name_;
};

class StringNode : public Node {
public:
  StringNode(const std::string id) : Node(), str_(id) { } 
  virtual ~StringNode() {}
  const std::string get_str_() const { return str_; }
  virtual const Literal* eval() const;
private:
  std::string str_;
};

// Binary Node //////////////
class BinaryNode : public Node {
public:
  BinaryNode(Node* l, Node* r) : Node(), left(l), right(r) {}
  virtual const Literal* eval() const = 0;
  Node* getLeft()  const { return left; }
  Node* getRight() const { return right; }
  BinaryNode(const BinaryNode&) = delete;
  BinaryNode& operator=(const BinaryNode&) = delete;
protected:
  Node *left;
  Node *right;
};


class AsgBinaryNode : public BinaryNode {
public:
  AsgBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class AddBinaryNode : public BinaryNode {
public:
  AddBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class SubBinaryNode : public BinaryNode {
public:
  SubBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class MulBinaryNode : public BinaryNode {
public:
  MulBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class DivBinaryNode : public BinaryNode {
public:
  DivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class PctBinaryNode : public BinaryNode {
public:
  PctBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class DbStarBinaryNode : public BinaryNode {
public:
  DbStarBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class DbSlashBinaryNode : public BinaryNode {
public:
  DbSlashBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

// Unary Node //////////////
class UnaryNode : public Node {
public:
  UnaryNode(Node* n) :Node(), node(n) {}
  virtual const Literal* eval() const 
  {
    if (!node) {
    throw "error";
    }
    const Literal* x = node->eval();
    return x->MiusOp();
  }
  Node* getnode() const { return node; }
  UnaryNode(const UnaryNode&) = delete;
  UnaryNode& operator=(const UnaryNode&) = delete;
protected:
  Node *node;

};

/*class MiusUnaryNode : public UnaryNode {
public:
  MiusUnaryNode(Node* n);
  virtual const Literal* eval() const;
};
*/

class LessBinaryNode : public BinaryNode {
public:
   LessBinaryNode(Node* left, Node* right) : BinaryNode(left,right) {}
   virtual const Literal* eval() const;
};


class GreaterBinaryNode : public BinaryNode {
public:
   GreaterBinaryNode(Node* left, Node* right) : BinaryNode(left,right) {
     std::cout << "Great Binary Node" << std::endl;
   }
   virtual const Literal* eval() const;
};

class EqualEqualBinaryNode : public BinaryNode {
public:
   EqualEqualBinaryNode(Node* left, Node* right) : BinaryNode(left,right) {}
   virtual const Literal* eval() const;
};

class GreaterEqualBinaryNode : public BinaryNode {
public:
   GreaterEqualBinaryNode(Node* left, Node* right) : BinaryNode(left,right) {}
   virtual const Literal* eval() const;
};

class LessEqualBinaryNode : public BinaryNode {
public:
   LessEqualBinaryNode(Node* left, Node* right) : BinaryNode(left,right) {}
   virtual const Literal* eval() const;
};

class NotEqualBinaryNode : public BinaryNode {
public:
   NotEqualBinaryNode(Node* left, Node* right) : BinaryNode(left,right) {}
   virtual const Literal* eval() const;
};
