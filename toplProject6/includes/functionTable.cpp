#include "functionTable.h"

bool FunctionTable::Exists(const std::string& name) const {
  std::map<std::string, const Node*>::const_iterator iter 
      = function_table_.find(name);
  if (iter == function_table_.end()) {
    return false;
  } else {
    return true;
  }
}

void FunctionTable::SetSuite(const std::string& name, const Node* suite) {
  function_table_[name] = suite;
}

const Node* FunctionTable::GetSuite(const std::string& name) const {
  std::map<std::string, const Node*>::const_iterator iter 
      = function_table_.find(name);
  if (function_table_.end() == iter) {
    throw name + std::string(" doesn't exist");
  }
  return iter->second;
}