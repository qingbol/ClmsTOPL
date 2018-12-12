#ifndef FUNCTIONTABLE__H
#define FUNCTIONTABLE__H

#include <iostream>
#include <string>
#include <map>

class Node;
class FunctionTable {
 public:
  FunctionTable() : function_table_() {};
  bool Exists(const std::string& name) const;
  void SetSuite(const std::string& name, const Node* suite);
  const Node* GetSuite(const std::string& name) const;
 private:
  std::map<std::string, const Node*> function_table_;
};
#endif