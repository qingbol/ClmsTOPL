// #include <map>
// #include <algorithm>
#include "symbolTable.h"
#include "literal.h"

// SymbolTable& SymbolTable::getInstance() {
//   static SymbolTable instance;
//   return instance;
// }

bool SymbolTable::Exists(const std::string& name) const {
  std::map<std::string, const Literal*>::const_iterator iter 
      = variable_table_.find(name);
  if (variable_table_.end() == iter) {
    return false;
  } else {
    return  true;
  }
}

const Literal* SymbolTable::GetValue(const std::string& name) const {
  std::map<std::string, const Literal*>::const_iterator iter 
      = variable_table_.find(name);
  if (iter == variable_table_.end()) throw name+std::string(" not found");
  return iter->second; 
}

void SymbolTable::SetValue(const std::string& name, const Literal* val) { 
  // std::pair<std::string, const Literal*> temp(name, val);
  variable_table_[name] = val;
  // table.insert(temp);
}

