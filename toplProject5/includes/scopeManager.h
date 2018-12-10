#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include "symbolTable.h"
#include "functionTable.h"
#include "literal.h"

////Singleton pattern. Used to manage scopes
class ScopeManager {
 public:
  static ScopeManager& GetInstance();
  
  const Literal* get_variable(const std::string& name);
  const Node* get_function(const std::string& name);

  //insert variableName-value node(IdentNode) into symbolTable
  void set_variable(const std::string& name, const Literal* node);
  //insert fuctionName-functionBody node(FunctionNOde) into functionTable
  void set_function(const std::string& name, const Node* node);
  
  bool CheckVariable(const std::string& name) const;
  bool CheckFunction(const std::string& name) const;

  void PushScope();
  void PopScope();

 private:
  //scope_ptr: indicate the scope level
  int scope_ptr_;
  std::vector<SymbolTable> variable_vector_;
  std::vector<FunctionTable> function_vector_;
  ScopeManager() : scope_ptr_(0), variable_vector_(), function_vector_() {
    variable_vector_.push_back(SymbolTable());
    function_vector_.push_back(FunctionTable());
  }
};

#endif