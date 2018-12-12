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
    throw name + std::string("doesnt exist");
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
    throw name + std::string("doesnt exist");
  }
  return 0;
}

////Insert variable-value pair to variable_vector_ [certain scope_ptr_]
void ScopeManager::set_variable(const std::string& name, const Literal* node) {
  variable_vector_[scope_ptr_].SetValue(name, node);
}

////Insert funciton-suite pair to funciton_vector_ [certain scope_ptr_]
void ScopeManager::set_function(const std::string& name, const Node* node) {
  function_vector_[scope_ptr_].SetSuite(name, node);
}

bool ScopeManager::CheckVariable(const std::string& name) const {
  return variable_vector_[scope_ptr_].Exists(name);
}

bool ScopeManager::CheckFunction(const std::string& name) const {
  return function_vector_[scope_ptr_].Exists(name);
}

void ScopeManager::PushScope() {
  scope_ptr_++;
  FunctionTable funcTable;
  SymbolTable symTable;
  variable_vector_.push_back(symTable);
  function_vector_.push_back(funcTable);
}

void ScopeManager::PopScope() {
  variable_vector_.pop_back();
  function_vector_.pop_back();
  scope_ptr_--;
}