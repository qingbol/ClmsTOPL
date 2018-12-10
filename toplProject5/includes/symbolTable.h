#ifndef SYMBOLTABLE__H
#define SYMBOLTABLE__H

#include <iostream>
#include <string>
#include <map>
// #include <algorithm>

class Literal;

class SymbolTable {
 public:
  // static   SymbolTable& getInstance();
  SymbolTable() : variable_table_() {}
  bool Exists(const std::string& name) const;
  void SetValue(const std::string& name, const Literal* val);
  const Literal* GetValue(const std::string& name) const;
 private:
  std::map<std::string, const Literal*> variable_table_;
};

#endif
