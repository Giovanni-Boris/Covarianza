#ifndef Y_H
#define Y_H
#include "X.h"
#include "C.h"
#include "A.h"
#include <iostream>
#include "ClaseB.h"
#include "ClaseC.h"
class Y:public X {
  public:
    B* goo(B *obj){
      obj->goo();
      B* obj2 = new ClaseC;
      std::cout<<"FOO DESDE Y\n";
      return obj2;
    }




};


#endif
