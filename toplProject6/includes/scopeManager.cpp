#include "scopeManager.h"

ScopeManager& ScopeManager::GetInstance() {
  static ScopeManager instance;
  return instance;
}

////search variable-value in SymbolTable And return Literal node.
const Literal* ScopeManager::get_variable(const std::string &name) {
  std::vector<SymbolTable>::reverse_iterator rit 
      = variable_vector_.rbegin();
  for( ; rit != variable_vector_.rend(); ++rit) {
    if (rit->Exists(name)) {
      return rit->GetValue(name);
    }
  }
  if (rit == variable_vector_.rend()) {
    throw name + std::string(" variable doesnt exist");
  }
  return 0;
}

////search function-suite in FunctionTable And return Literal node.
const Node* ScopeManager::get_function(const std::string& name) {
  std::vector<FunctionTable>::reverse_iterator rit 
      = function_vector_.rbegin();
  for( ; rit != function_vector_.rend(); ++rit) {
    if (rit->Exists(name)) {
      return rit->GetSuite(name);
    }
  }
  if (rit == function_vector_.rend()) {
    throw name + std::string(" function doesnt exist");
  }
  return 0;
}
////search function-suite in FunctionTable And return Literal node.
const Node* ScopeManager::get_parameter(const std::string& name) {
  std::vector<FunctionTable>::reverse_iterator rit 
      = parameter_vector_.rbegin();
  for( ; rit != parameter_vector_.rend(); ++rit) {
    if (rit->Exists(name)) {
      return rit->GetSuite(name);
    }
  }
  if (rit == parameter_vector_.rend()) {
    throw name + std::string(" parameter doesnt exist");
  }
  return 0;
}

////Insert variable-value pair to variable_vector_ [certain scope_ptr_]
void ScopeManager::set_variable(const std::string& name, const Literal* node) {
  variable_vector_[scope_ptr_].SetValue(name, node);
}
////Insert function-suite pair to function_vector_ [certain scope_ptr_]
void ScopeManager::set_function(const std::string& name, const Node* node) {
  function_vector_[scope_ptr_].SetSuite(name, node);
}
////Insert parmeter-argument pair to parameter_vector_ [certain scope_ptr_]
void ScopeManager::set_parameter(const std::string& name, const Node* node) {
  parameter_vector_[scope_ptr_].SetSuite(name, node);
}

bool ScopeManager::CheckVariable(const std::string& name) const {
  return variable_vector_[scope_ptr_].Exists(name);
}
bool ScopeManager::CheckFunction(const std::string& name) const {
  return function_vector_[scope_ptr_].Exists(name);
}
bool ScopeManager::CheckVariableInAllTables(const std::string& name) const {
  std::vector<SymbolTable>::const_reverse_iterator riter
      = variable_vector_.rbegin();
  for (; riter != variable_vector_.rend(); riter++) {
    if (riter->Exists(name)) return true;
  }
  return false;
}
bool ScopeManager::CheckFunctionInAllTables(const std::string& name) const {
  std::vector<FunctionTable>::const_reverse_iterator riter 
      = function_vector_.rbegin();
  for (; riter != function_vector_.rend(); riter++) {
    if (riter->Exists(name)) return true;
  }
  return false;
}
bool ScopeManager::CheckVariableInLastTable(const std::string& name) const {
  std::vector<SymbolTable>::const_reverse_iterator riter 
      = variable_vector_.rbegin();
  if (riter->Exists(name)) return true;
  else return false;
}

int ScopeManager::CheckFunctionScope(const std::string& name) const {
  std::vector<FunctionTable>::const_reverse_iterator riter 
      = function_vector_.rbegin();
  int function_scope = function_vector_.size();
  while ( riter != function_vector_.rend()) {
    if (riter->Exists(name)) {
      return function_scope;
    } else {
      function_scope--;
    }
    ++riter;
  }
  if (riter == function_vector_.rend()) throw std::string("can't find scope");
  return 0;
}


void ScopeManager::PushScope(const std::string& name) {
  scope_ptr_++;
  FunctionTable func_table, para_table;
  SymbolTable sym_table;

 if (CheckFunctionScope(name) != scope_ptr_) {
   sym_table = variable_vector_[CheckFunctionScope(name)-1];
 }
 if(CheckFunctionInAllTables(name)) {
   func_table.SetSuite(name, get_function(name));
   para_table.SetSuite(name, get_parameter(name));
 }

  variable_vector_.push_back(sym_table);
  function_vector_.push_back(func_table);
  parameter_vector_.push_back(para_table);
}
// void ScopeManager::PushScope() {
//   scope_ptr_++;
//   FunctionTable func_table; para_table
//   SymbolTable sym_table;
//   variable_vector_.push_back(sym_table);
//   function_vector_.push_back(func_table);
// }

void ScopeManager::PopScope() {
  variable_vector_.pop_back();
  function_vector_.pop_back();
  parameter_vector_.pop_back();
  scope_ptr_--;
}