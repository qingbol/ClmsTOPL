#ifndef LITERAL__H
#define LITERAL__H

#include "node.h"
#include "poolOfNodes.h"
#include <cmath>
#include <iomanip>

class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(double) const =0;
  virtual const Literal* opPlus(int) const =0;
  virtual const Literal* opPlus(const std::string&) const =0;

  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(double) const =0;
  virtual const Literal* opMult(int) const =0;
  virtual const Literal* opMult(const std::string&) const =0;

  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(double) const =0;
  virtual const Literal* opSubt(int) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(double) const =0;
  virtual const Literal* opDiv(int) const =0;

  virtual const Literal* operator%(const Literal& rhs) const =0;
  virtual const Literal* opPct(double) const =0;
  virtual const Literal* opPct(int) const =0;

  virtual const Literal* operator^(const Literal& rhs) const =0;
  virtual const Literal* opDbStar(double) const =0;
  virtual const Literal* opDbStar(int) const =0;

  virtual const Literal* DbSlash(const Literal& rhs) const =0;
  virtual const Literal* opDbSlash(double) const =0;
  virtual const Literal* opDbSlash(int) const =0;

  //Unary operator
  //virtual const Literal* PlusOp()  const = 0;
  virtual const Literal* MiusOp()  const = 0;

  //%%%%%%start(new operation for project5)%%%%%%%%
  virtual const Literal* Less(const Literal& rhs) const = 0;
  virtual const Literal* opLess(double) const = 0;
  virtual const Literal* opLess(int) const = 0;

  virtual const Literal* Greater(const Literal& rhs) const = 0;
  virtual const Literal* opGreater(double) const = 0;
  virtual const Literal* opGreater(int) const = 0;

  virtual const Literal* EqualEqual(const Literal& rhs) const = 0;
  virtual const Literal* opEqualEqual(double) const = 0;
  virtual const Literal* opEqualEqual(int) const = 0;

  virtual const Literal* GreaterEqual(const Literal& rhs) const = 0;
  virtual const Literal* opGreaterEqual(double) const = 0;
  virtual const Literal* opGreaterEqual(int) const = 0;

  virtual const Literal* LessEqual(const Literal& rhs) const = 0;
  virtual const Literal* opLessEqual(double) const = 0;
  virtual const Literal* opLessEqual(int) const = 0;

  virtual const Literal* NotEqual(const Literal& rhs) const = 0;
  virtual const Literal* opNotEqual(double) const = 0;
  virtual const Literal* opNotEqual(int) const = 0;
  //%%%%%%%end(new operation for project5)%%%%%%%%%

  virtual int get_value() const = 0;
  virtual const Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "No Way" << std::endl; 
  }
};

// class StringLiteral;


//=============FloatLiteral=============================
class FloatLiteral: public Literal {
 public:
  FloatLiteral(double _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(double lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(const std::string& ) const {
    throw std::string("double can't plus string");
  }
  
  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(double lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(double lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<double>(lhs) * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(const std::string&) const {
    throw std::string("double can't multiply string");
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opPct(val);
  }
  virtual const Literal* opPct(double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(fmod(lhs,val)+val,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPct(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(fmod(lhs,val)+val,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const  {
    return rhs.opDbStar(val);
  }
  virtual const Literal* opDbStar(double lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDbStar(int lhs) const  {
    const Literal* node = new FloatLiteral(pow(static_cast<double>(lhs), val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* DbSlash(const Literal& rhs) const  {
    return rhs.opDbSlash(val);
  }
  virtual const Literal* opDbSlash(double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDbSlash(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(floor(lhs / val));
    PoolOfNodes::getInstance().add(node);

    return node;
  }

  //Unary operator
  virtual const Literal* MiusOp() const  {
    const Literal* node = new FloatLiteral(-val);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  //%%%%%%%%%start(comparision for project5)%%%%%
  virtual const Literal* Less(const Literal& rhs) const {
    return rhs.opLess(val);
  }
  virtual const Literal* opLess(double lhs) const {
    const Literal* node;
    if(lhs < val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opLess(int lhs) const {
    const Literal* node;
    if(lhs < val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* Greater(const Literal& rhs) const {
    return rhs.opGreater(val);
  }
  virtual const Literal* opGreater(double lhs) const {
    const Literal* node;
    if(lhs > val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opGreater(int lhs) const {
    const Literal* node;
    if(lhs > val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);

    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* EqualEqual(const Literal& rhs) const {
    // std::cerr << "double equalEqual" << std::endl;
    return rhs.opEqualEqual(val);
  }
  virtual const Literal* opEqualEqual(double lhs) const {
    const Literal* node;
    if(lhs == val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opEqualEqual(int lhs) const {
    const Literal* node;
    if(lhs == val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* GreaterEqual(const Literal& rhs) const {
    return rhs.opGreaterEqual(val);
  }
  virtual const Literal* opGreaterEqual(double lhs) const {
    const Literal* node;
    if(lhs >= val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opGreaterEqual(int lhs) const {
    const Literal* node;
    if(lhs >= val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* LessEqual(const Literal& rhs) const {
    return rhs.opLessEqual(val);
  }
  virtual const Literal* opLessEqual(double lhs) const {
    const Literal* node;
    if(lhs <= val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opLessEqual(int lhs) const {
    const Literal* node;
    if(lhs <= val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* NotEqual(const Literal& rhs) const {
    return rhs.opNotEqual(val);
  }
  virtual const Literal* opNotEqual(double lhs) const {
    const Literal* node;
    if(lhs != val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opNotEqual(int lhs) const {
    const Literal* node;
    if(lhs != val)
      node = new FloatLiteral(1);
    else
      node = new FloatLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  //%%%%%%%%%%%%%%end(comparision for project5)%%%

  virtual const Literal* eval() const { return this; }
  virtual int get_value() const { return (int)(this->val);}
  virtual void print() const { 
    if(fmod(val,1) == 0){
      std::cout << "double: " << std::setprecision(17) << val << ".0" << std::endl;
    }
    else{
      std::cout << "double: " << std::setprecision(17) << val << std::endl;
    }
  }
 private:
  double val;
};



//=============StringLiteral=============================
class StringLiteral: public Literal {
public:
 StringLiteral(std::string _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(double ) const  {
    throw std::string("string can't plus double");
  }
  virtual const Literal* opPlus(int ) const  {
    throw std::string("string can't plus int");
  }
  virtual const Literal* opPlus(const std::string& lhs) const {
    const Literal* node = new StringLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-(const Literal& ) const  {
    throw std::string("string can't substract double");
    //return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(double ) const  {
    throw std::string("string can't substract double");
  }
  virtual const Literal* opSubt(int ) const  {
    throw std::string("string can't substract int");
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    //throw std::string("string can't substract double");
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(double ) const  {
    throw std::string("string can't multiply double");
  }
  virtual const Literal* opMult(int lhs) const  {
    std::string new_str("");
    // std::cerr << "lhs value is " << lhs << std::endl;
    for (int i = 0; i < lhs; ++i) {
      new_str = new_str + val;
    }
    const Literal* node = new StringLiteral(new_str);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(const std::string& ) const {
    throw std::string("string can't multiply int");
  }

  virtual const Literal* operator/(const Literal& ) const  {
    throw std::string("string can't substract double");
    //return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(double ) const  {
    throw std::string("string can't multiply int");
  }
  virtual const Literal* opDiv(int ) const  {
    throw std::string("string can't multiply int");
  }

  virtual const Literal* operator%(const Literal& ) const  {
    throw std::string("string can't substract double");
    //return rhs.opPct(val);
  }
  virtual const Literal* opPct(double ) const  {
    throw std::string("string can't multiply int");
  }
  virtual const Literal* opPct(int ) const  {
    throw std::string("string can't multiply int");
  }

  virtual const Literal* operator^(const Literal& ) const  {
    throw std::string("string can't substract double");
    //return rhs.opDbStar(val);
  }
  virtual const Literal* opDbStar(double ) const  {
    throw std::string("string can't multiply int"); }
  virtual const Literal* opDbStar(int ) const  {
    throw std::string("string can't multiply int");
  }

  virtual const Literal* DbSlash(const Literal& ) const  {
    throw std::string("string can't substract double");
    //return rhs.opDbSlash(val);
  }
  virtual const Literal* opDbSlash(double ) const  {
    throw std::string("string can't multiply int");
  }
  virtual const Literal* opDbSlash(int ) const  {
    throw std::string("string can't multiply int");
  }

  //Unary operator
  virtual const Literal* MiusOp() const  {
    throw std::string("string can't multiply int");
  }

  //%%%%%%%%start(comparision for project5)%%%%%
  virtual const Literal* Less(const Literal& ) const {
    throw std::string("string can't compare");
    // return rhs.opLess(val);
  }
  virtual const Literal* opLess(double ) const {
    throw std::string("string can't compare");
  }
  virtual const Literal* opLess(int ) const {
    throw std::string("string can't compare");
  }

  virtual const Literal* Greater(const Literal& ) const {
    throw std::string("string can't compare");
    // return rhs.opGreater(val);
  }
  virtual const Literal* opGreater(double ) const {
    throw std::string("string can't compare");
  }
  virtual const Literal* opGreater(int ) const {
    throw std::string("string can't compare");
  }

  virtual const Literal* EqualEqual(const Literal& ) const {
    throw std::string("string can't compare");
    // return rhs.opEqualEqual(val);
  }
  virtual const Literal* opEqualEqual(double ) const {
    throw std::string("string can't compare");
  }
  virtual const Literal* opEqualEqual(int ) const {
    throw std::string("string can't compare");
  }

  virtual const Literal* GreaterEqual(const Literal& ) const {
    throw std::string("string can't compare");
    // return rhs.opGreaterEqual(val);
  }
  virtual const Literal* opGreaterEqual(double ) const {
    throw std::string("string can't compare");
  }
  virtual const Literal* opGreaterEqual(int ) const {
    throw std::string("string can't compare");
  }

  virtual const Literal* LessEqual(const Literal& ) const {
    throw std::string("string can't compare");
    // return rhs.opLessEqual(val);
  }
  virtual const Literal* opLessEqual(double ) const {
    throw std::string("string can't compare");
  }
  virtual const Literal* opLessEqual(int ) const {
    throw std::string("string can't compare");
  }

  virtual const Literal* NotEqual(const Literal& ) const {
    throw std::string("string can't compare");
    // return rhs.opNotEqual(val);
  }
  virtual const Literal* opNotEqual(double ) const {
    throw std::string("string can't compare");
  }
  virtual const Literal* opNotEqual(int ) const {
    throw std::string("string can't compare");
  }
  //%%%%%%%%end(comparision for project5)%%%%%%%%%%

  virtual int get_value() const { return 123;}
  std::string get_val() const { return val; }
  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "STRING: " << val << std::endl; 
  }
private:
  std::string val;
};


//=============IntLiteral=============================
class IntLiteral: public Literal {
public:
 IntLiteral(int _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(double lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<double>(val) + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new IntLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(const std::string& ) const {
    throw std::string("double can't plus string");
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(double lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new IntLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(double lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    // std::cerr << "lhs value is " << lhs << std::endl;
    const Literal* node = new IntLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(const std::string& lhs) const {
    // std::cerr << "lhs value is " << lhs << std::endl;
    std::string new_str("");
    // throw std::string("debug...");
    for (int i = 0; i < val; ++i) {
      new_str = new_str + lhs;
    }
    const Literal* node = new StringLiteral(new_str);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);

    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(floor(static_cast<double>(lhs)/ val));
    //std::cout<<"lhs is  "<<lhs<<"VAL is "<<val<<" floor is "<<floor((double)lhs/val)<<std::endl;
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opPct(val);
  }
  virtual const Literal* opPct(double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(fmod(lhs,val)+val,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPct(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(fmod(fmod(lhs,val)+val,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const  {
    return rhs.opDbStar(val);
  }
  virtual const Literal* opDbStar(double lhs) const  {
    const Literal* node = new FloatLiteral(pow(static_cast<double>(lhs), val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDbStar(int lhs) const  {
    const Literal* node;
    if (val < 0) {
      node = new FloatLiteral(pow(static_cast<double>(lhs), val));
     // std::cerr << "val <0 is " << val << "lhs is " << lhs << std::endl;
    } else {
      node = new IntLiteral(pow(lhs, val));
     // std::cerr << "val >0 is " << val << "lhs is " << lhs << std::endl;
    }
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* DbSlash(const Literal& rhs) const  {
    return rhs.opDbSlash(val);
  }
  virtual const Literal* opDbSlash(double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(floor(lhs / val));
    PoolOfNodes::getInstance().add(node);

    return node;
  }
  virtual const Literal* opDbSlash(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(floor(static_cast<double>(lhs)/ val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  //Unary operator
  virtual const Literal* MiusOp() const  {
    const Literal* node = new IntLiteral(-val);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  
  //%%%%%%%%%start(comparision for project5)%%%%%%%%%
  virtual const Literal* Less(const Literal& rhs) const {
    return rhs.opLess(val);
  }

  virtual const Literal* opLess(double lhs) const {
    const Literal* node;
    if(lhs < val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* opLess(int lhs) const {
    const Literal* node;
    if(lhs < val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* Greater(const Literal& rhs) const {
    return rhs.opGreater(val);
  }

  virtual const Literal* opGreater(double lhs) const {
    const Literal* node;
    if(lhs >val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* opGreater(int lhs) const {
    const Literal* node;
    if(lhs > val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* EqualEqual(const Literal& rhs) const {
    // std::cerr << "int equalEqual" << std::endl;
    return rhs.opEqualEqual(val);
  }
  virtual const Literal* opEqualEqual(double lhs) const {
    const Literal* node;
    if(lhs == val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opEqualEqual(int lhs) const {
    const Literal* node;
    // std::cerr << "lhs is " << lhs << " val is " << val << std::endl;
    if(lhs == val) {
      // std::cerr << "lhs==val" <<std::endl;
      node = new IntLiteral(1);
    } else {
      // std::cerr << "lhs<>val" <<std::endl;
      node = new IntLiteral(0);
    }
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* GreaterEqual(const Literal& rhs) const {
    return rhs.opGreaterEqual(val);
  }

  virtual const Literal* opGreaterEqual(double lhs) const {
    const Literal* node;
    if(lhs >= val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* opGreaterEqual(int lhs) const {
    const Literal* node;
    if(lhs >= val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* LessEqual(const Literal& rhs) const {
    return rhs.opLessEqual(val);
  }

  virtual const Literal* opLessEqual(double lhs) const {
    const Literal* node;
    if(lhs <= val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* opLessEqual(int lhs) const {
    const Literal* node;
    if(lhs <= val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* NotEqual(const Literal& rhs) const {
    return rhs.opNotEqual(val);
  }

  virtual const Literal* opNotEqual(double lhs) const {
    const Literal* node;
    if(lhs != val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* opNotEqual(int lhs) const {
    const Literal* node;
    if(lhs != val)
      node = new IntLiteral(1);
    else
      node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  //%%%%%%%%%%%end(comparision for project5)%%%%%

  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "INT: " << val << std::endl; 
  }
  virtual int get_value() const { return this->val;}
  int get_val() const { return val;} 
private:
  int val;
};

#endif