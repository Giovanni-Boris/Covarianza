#ifndef X_H
#define X_H
#include "B.h"
#include <iostream>
#include "ClaseB.h"
class X {
  public:
    virtual B* goo(B *obj){
      obj->goo();
      B* obj2 = new ClaseB;
      std::cout<<"FOO DESDE X\n";
      return obj2;
    }
    
};


#endif
