#include "node.h"
#include "poolOfNodes.h"
#include <cmath>

class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(float) const =0;
  virtual const Literal* opPlus(int) const =0;
  virtual const Literal* opPlus(const std::string&) const =0;

  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(float) const =0;
  virtual const Literal* opMult(int) const =0;
  virtual const Literal* opMult(const std::string&) const =0;

  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(float) const =0;
  virtual const Literal* opSubt(int) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(float) const =0;
  virtual const Literal* opDiv(int) const =0;

  virtual const Literal* operator%(const Literal& rhs) const =0;
  virtual const Literal* opPct(float) const =0;
  virtual const Literal* opPct(int) const =0;

  virtual const Literal* operator^(const Literal& rhs) const =0;
  virtual const Literal* opDbStar(float) const =0;
  virtual const Literal* opDbStar(int) const =0;

  virtual const Literal* DbSlash(const Literal& rhs) const =0;
  virtual const Literal* opDbSlash(float) const =0;
  virtual const Literal* opDbSlash(int) const =0;

  //Unary operator
  //virtual const Literal* PlusOp()  const = 0;
  virtual const Literal* MiusOp()  const = 0;

  virtual const Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "No Way" << std::endl; 
  }
};

// class StringLiteral;


//=============FloatLiteral=============================
class FloatLiteral: public Literal {
public:
  FloatLiteral(float _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
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
    throw std::string("float can't plus string");
  }
  
  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
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
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(lhs) * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(const std::string&) const {
    throw std::string("float can't multiply string");
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
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
  virtual const Literal* opPct(float lhs) const  {
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
  virtual const Literal* opDbStar(float lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDbStar(int lhs) const  {
    const Literal* node = new FloatLiteral(pow(static_cast<float>(lhs), val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* DbSlash(const Literal& rhs) const  {
    return rhs.opDbSlash(val);
  }
  virtual const Literal* opDbSlash(float lhs) const  {
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

  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "FLOAT: " << val << std::endl; 
  }
private:
  float val;
};



//=============StringLiteral=============================
class StringLiteral: public Literal {
public:
 StringLiteral(std::string _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float ) const  {
    throw std::string("string can't plus float");
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
    throw std::string("string can't substract float");
    //return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float ) const  {
    throw std::string("string can't substract float");
  }
  virtual const Literal* opSubt(int ) const  {
    throw std::string("string can't substract int");
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    //throw std::string("string can't substract float");
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float ) const  {
    throw std::string("string can't multiply float");
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
    throw std::string("string can't substract float");
    //return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float ) const  {
    throw std::string("string can't multiply int");
  }
  virtual const Literal* opDiv(int ) const  {
    throw std::string("string can't multiply int");
  }

  virtual const Literal* operator%(const Literal& ) const  {
    throw std::string("string can't substract float");
    //return rhs.opPct(val);
  }
  virtual const Literal* opPct(float ) const  {
    throw std::string("string can't multiply int");
  }
  virtual const Literal* opPct(int ) const  {
    throw std::string("string can't multiply int");
  }

  virtual const Literal* operator^(const Literal& ) const  {
    throw std::string("string can't substract float");
    //return rhs.opDbStar(val);
  }
  virtual const Literal* opDbStar(float ) const  {
    throw std::string("string can't multiply int"); }
  virtual const Literal* opDbStar(int ) const  {
    throw std::string("string can't multiply int");
  }

  virtual const Literal* DbSlash(const Literal& ) const  {
    throw std::string("string can't substract float");
    //return rhs.opDbSlash(val);
  }
  virtual const Literal* opDbSlash(float ) const  {
    throw std::string("string can't multiply int");
  }
  virtual const Literal* opDbSlash(int ) const  {
    throw std::string("string can't multiply int");
  }

  //Unary operator
  virtual const Literal* MiusOp() const  {
    throw std::string("string can't multiply int");
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "STRING: " << val << std::endl; 
  }
  const std::string get_val() const { return val; }
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
  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(val) + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new IntLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(const std::string& ) const {
    throw std::string("float can't plus string");
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
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
  virtual const Literal* opMult(float lhs) const  {
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
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);

    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(floor(static_cast<float>(lhs)/ val));
    //std::cout<<"lhs is  "<<lhs<<"VAL is "<<val<<" floor is "<<floor((float)lhs/val)<<std::endl;
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opPct(val);
  }
  virtual const Literal* opPct(float lhs) const  {
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
  virtual const Literal* opDbStar(float lhs) const  {
    const Literal* node = new FloatLiteral(pow(static_cast<float>(lhs), val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDbStar(int lhs) const  {
    const Literal* node;
    if (val < 0) {
      node = new FloatLiteral(pow(static_cast<float>(lhs), val));
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
  virtual const Literal* opDbSlash(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(floor(lhs / val));
    PoolOfNodes::getInstance().add(node);

    return node;
  }
  virtual const Literal* opDbSlash(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(floor(static_cast<float>(lhs)/ val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  //Unary operator
  virtual const Literal* MiusOp() const  {
    const Literal* node = new IntLiteral(-val);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "INT: " << val << std::endl; 
  }
  int get_val() const { return val;}
  /* const int get_val() const { return val;} */
private:
  int val;
};

