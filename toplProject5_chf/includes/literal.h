#include "node.h"
#include "iostream"
#include <math.h>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <sstream>
#include <iomanip>  
#include "poolOfNodes.h"

class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(const std::string&) const =0;
  virtual const Literal* opPlus(long double) const =0;
  virtual const Literal* opPlus(int) const =0;

  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(const std::string&) const =0;
  virtual const Literal* opMult(long double) const =0;
  virtual const Literal* opMult(int) const =0;

  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(const std::string&) const =0;
  virtual const Literal* opSubt(long double) const =0;
  virtual const Literal* opSubt(int) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(const std::string&) const =0;
  virtual const Literal* opDiv(long double) const =0;
  virtual const Literal* opDiv(int) const =0;

  virtual const Literal* doubleStar(const Literal& rhs) const =0;
  virtual const Literal* opDStar(const std::string&) const =0;
  virtual const Literal* opDStar(long double) const =0;
  virtual const Literal* opDStar(int) const =0;

  virtual const Literal* operator%(const Literal& rhs) const =0;
  virtual const Literal* opPerc(const std::string&) const =0;
  virtual const Literal* opPerc(long double) const =0;
  virtual const Literal* opPerc(int) const =0;

  virtual const Literal* doubleSlash(const Literal& rhs) const =0;
  virtual const Literal* opDSlash(const std::string&) const =0;
  virtual const Literal* opDSlash(long double) const =0;
  virtual const Literal* opDSlash(int) const =0;

  virtual float getVal() const = 0 ;
  virtual const Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "No Way" << std::endl; 
  }



};

class StringLiteral  : public Literal{
public:
  StringLiteral(const std::string _val) : val(_val){}

  virtual const Literal* operator+(const Literal& rhs) const{
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(const std::string& lhs) const {
    const Literal* node = new StringLiteral(lhs+val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(long double) const{
    throw std::string("can't add a double and a string");
  }
  virtual const Literal* opPlus(int) const{
    throw std::string("Oops,error!");
  }


  virtual const Literal* operator*(const Literal& rhs) const {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(const std::string&) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opMult(long double) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opMult(int lhs) const {
    std::string temp;
    for(int i = 0; i < lhs; ++i){
      temp = temp + val;
    }
    const Literal* node = new StringLiteral(temp);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-(const Literal& rhs) const {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(long double) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opSubt(int) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opSubt(const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* operator/(const Literal& rhs) const {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(long double) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opDiv(int) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opDiv( const std::string&) const{
    throw std::string("Oops,error!");
  }

  
  virtual const Literal* doubleSlash(const Literal& rhs) const {
    return rhs.opDSlash(val);
  }
  virtual const Literal* opDSlash(long double) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opDSlash(int) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opDSlash(const std::string &) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* doubleStar(const Literal& rhs) const {
    return rhs.opDStar(val);
  }
  virtual const Literal* opDStar(long double) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opDStar(int) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opDStar(const std::string &) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* operator%(const Literal& rhs) const {
    return rhs.opPerc(val);
  }
  virtual const Literal* opPerc(long double) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opPerc(int) const {
    throw std::string("Oops,error!");
  }
  virtual const Literal* opPerc(const std::string &) const{
    throw std::string("Oops,error!");
  }

  float getVal() const {return 666 ;}
  std::string getStr() const {return val;}
  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "STRING: " << "\""<< val << "\"" << std::endl;   
  }


private:
  std::string val;
};


class FloatLiteral: public Literal {
public:
  FloatLiteral(long double _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(const std::string&) const  {
    throw std::string("Oops,error!");
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(const std::string&) const  {
    throw std::string("Oops,error!");
  }


  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<long double>(lhs) * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult( const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(long double lhs) const  {
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
  virtual const Literal* opDiv( const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* doubleStar(const Literal& rhs) const  {
    return rhs.opDStar(val);
  }
  virtual const Literal* opDStar(long double lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDStar(int lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDStar( const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opPerc(val);
  }
  virtual const Literal* opPerc(long double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node;
    if ( (fmod(lhs,val) == 0.0 ) && ((val < 0) || (lhs < 0)) )  
      node = new FloatLiteral(-fmod(lhs,val));
    else if ( ( lhs>0 && val<0 ) || ( lhs<0 && val>0) ) 
      node = new FloatLiteral(fmod(lhs,val) + val);
    else node = new FloatLiteral(fmod(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPerc(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node;
    if ( (fmod(lhs,val) == 0.0 ) && ((val < 0) || (lhs < 0)) )  
      node = new FloatLiteral(-fmod(lhs,val));
    else if ( ( lhs>0 && val<0 ) || ( lhs<0 && val>0) ) 
      node = new FloatLiteral(fmod(lhs,val) + val);
    else node = new FloatLiteral(fmod(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPerc( const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* doubleSlash(const Literal& rhs) const  {
    return rhs.opDSlash(val);
  }
  virtual const Literal* opDSlash(long double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDSlash(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDSlash( const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual float getVal() const {
	return val;
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    if(fmod(val,1) == 0)
      std::cout << std::setprecision(12) << val << ".0" <<std::endl; 
    else
      std::cout << std::setprecision(12) << val << std::endl;  
  }
private:
  long double val;
};

class IntLiteral: public Literal {
public:
  IntLiteral(int _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(long double lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<long double>(val) + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new IntLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new IntLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new IntLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(const std::string& lhs) const {
    std::string temp;
    for(int i = 0; i < val; ++i){
      temp = temp + lhs;
    }
    const Literal* node = new StringLiteral(temp);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(long double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    int tmp = lhs / val;
    if(( lhs>0 && val<0 ) || ( lhs<0 && val>0))
      tmp = tmp-1;
    const Literal* node = new IntLiteral(tmp);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* doubleStar(const Literal& rhs) const  {
    return rhs.opDStar(val);
  }
  virtual const Literal* opDStar(long double lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDStar(int lhs) const  {
    const Literal* node;
    if ( val < 0 ) node = new FloatLiteral(pow(lhs,val));
    else node = new IntLiteral(pow(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDStar(const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opPerc(val);
  }
  virtual const Literal* opPerc(long double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node; 
    if ( (fmod(lhs,val) == 0.0 ) && ((val < 0) || (lhs < 0)) )  
      node = new FloatLiteral(-fmod(lhs,val));
    else if ( ( lhs>0 && val<0 ) || ( lhs<0 && val>0) ) 
      node = new FloatLiteral(fmod(lhs,val) + val);
    else node = new FloatLiteral(fmod(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPerc(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node;
    if ( ( lhs>0 && val<0 ) || ( lhs<0 && val>0) ) 
      node = new IntLiteral(fmod(lhs,val) + val); 
    else node = new IntLiteral(fmod(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPerc(const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual const Literal* doubleSlash(const Literal& rhs) const  {
    return rhs.opDSlash(val);
  }
  virtual const Literal* opDSlash(long double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDSlash(int lhs) const  {
    return opDiv(lhs);
  }
  virtual const Literal* opDSlash(const std::string&) const{
    throw std::string("Oops,error!");
  }

  virtual float getVal() const {
    return (float)(this->val);
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << val << std::endl; 
  }
private:
  int val;
};

class NoneLiteral: public Literal {
public:
  NoneLiteral() {}
  ~NoneLiteral() {}
  const Literal* operator+(const Literal& rhs) const {
      return rhs.opPlus(val);
  }
  const Literal* opPlus(long double) const {
      throw std::string("Unsupported opeartion: double + NoneType");
  }
  const Literal* opPlus(int) const {
      throw std::string("Unsupported opeartion: int + NoneType");
  }
  const Literal* opPlus(std::string) const {
      throw std::string("Unsupported opeartion: NoneType + NoneType");
  }

  const Literal* operator*(const Literal& rhs) const {
      return rhs.opMult(val);
  }
  const Literal* opMult(long double) const {
      throw std::string("Unsupported opeartion: double * NoneType");
  }
  const Literal* opMult(int) const {
      throw std::string("Unsupported opeartion: int * NoneType");
  }
  const Literal* opMult(std::string) const {
      throw std::string("Unsupported opeartion: NoneType * NoneType");
  }

  const Literal* operator-(const Literal& rhs) const {
      return rhs.opSubt(val);
  }
  const Literal* opSubt(long double) const {
      throw std::string("Unsupported opeartion: double - NoneType");
  }
  const Literal* opSubt(int) const {
      throw std::string("Unsupported opeartion: int - NoneType");
  }
  const Literal* opSubt(std::string) const {
      throw std::string("Unsupported opeartion: NoneType - NoneType");
  }

  const Literal* operator/(const Literal& rhs) const {
      return rhs.opDiv(val);
  }
  const Literal* opDiv(long double) const {
      throw std::string("Unsupported opeartion: double / NoneType");
  }
  const Literal* opDiv(int) const {
      throw std::string("Unsupported opeartion: int / NoneType");
  }
  const Literal* opDiv(std::string) const {
      throw std::string("Unsupported opeartion: NoneType / NoneType");
  }

  
  const Literal* operator%(const Literal& rhs) const {
      return rhs.opPerc(val);
  } 
  const Literal* opPerc(long double) const {
      throw std::string("Unsupported opeartion: double % NoneType");
  }
  const Literal* opPerc(int) const {
      throw std::string("Unsupported opeartion: int % NoneType");
  }
  const Literal* opPerc(std::string) const {
      throw std::string("Unsupported opeartion: NoneType % NoneType");
  }

  const Literal* doubleSlash(const Literal& rhs) const {
      return rhs.opDSlash(val);
  }
  const Literal* opDSlash(long double) const {
      throw std::string("Unsupported opeartion: double // NoneType");
  }
  const Literal* opDSlash(int) const {
      throw std::string("Unsupported opeartion: int // NoneType");
  }
  const Literal* opDSlash(std::string) const {
      throw std::string("Unsupported opeartion: NoneType // NoneType");
  }

  const Literal* doubleStar(const Literal& rhs) const {
      return rhs.opDStar(val);
  }
  const Literal* opDStar(long double) const {
      throw std::string("Unsupported opeartion: double ** NoneType");
  }
  const Literal* opDStar(int) const {
      throw std::string("Unsupported opeartion: int ** NoneType");
  }
  const Literal* opDStar(std::string) const {
      throw std::string("Unsupported opeartion: NoneType ** NoneType");
  }

  
  virtual const Literal* eval() const {
      return this;
  }

  virtual void print() const { 
    std::cout << val  << std::endl; 
  }
  virtual float getVal() const {return 0 ;}
 // std::string getVal() const { return val; };

private:
  std::string val = "None";
};

class CompLiterals {

public:
  
    static int compare(const Literal* lit1, const Literal* lit2) {
        const FloatLiteral* flt1 = dynamic_cast<const FloatLiteral*>(lit1);
        const IntLiteral* int1 = dynamic_cast<const IntLiteral*>(lit1);
        const NoneLiteral* none1 = dynamic_cast<const NoneLiteral*>(lit1);
        const FloatLiteral* flt2 = dynamic_cast<const FloatLiteral*>(lit2);
        const IntLiteral*  int2 = dynamic_cast<const IntLiteral*>(lit2);
        const NoneLiteral* none2 = dynamic_cast<const NoneLiteral*>(lit2);

        if (flt1 != NULL) 
        {
            if (flt2)
            {
                return compare(flt1->getVal(), flt2->getVal());
            }
            if (int2)
            {
                return compare(flt1->getVal(), int2->getVal());
            }
            if (none2)
            {
                return compare(flt1->getVal(), none2->getVal());
            }
        }
        if (int2 != NULL)
        {
            if (flt2)
            {
                return compare(int1->getVal(), flt2->getVal());
            }
            if (int2)
            {
                return compare(int1->getVal(), int2->getVal());
            }
            if (none2)
            {
                return compare(int1->getVal(), none2->getVal());
            } 
        }
        if (none1 != NULL)
        {
            if (flt2)
            {
                return compare(none1->getVal(), flt2->getVal());
            }
            if (int2)
            {
                return compare(none1->getVal(), int2->getVal());
            }
            if (none2)
            {
                return compare(none1->getVal(), none2->getVal());
            }
        }

        throw std::string("compare literal error");
    }

    static int compare(std::string, std::string) { return 0; }
    static int compare(std::string, int) { return -1; }
    static int compare(std::string, double) { return -1; }
    static int compare(double , std::string) { return 1; }
    static int compare(double f1, int f2) { 
      if (f1 > 1.0*f2) return 1;
      if (f1 < 1.0*f2) return -1;
      return 0;
    }
    static int compare(double f1, double f2) { 
      if (f1 > f2) return 1;
      if (f1 < f2) return -1;
      return 0;
    }
    static int compare(int, std::string) { return 1; }
    static int compare(int f1, double f2) {  
      if (1.0*f1 > f2) return 1;
      if (1.0*f1 < f2) return -1;
      return 0; 
    }
    static int compare(int f1, int f2) { 
      if (f1 > f2) return 1;
      if (f1 < f2) return -1;
      return 0; 
    }
};


