#ifndef B_H
#define B_H
#include "A.h"
class B:public A {
  public:
    //void too();
    virtual void goo()=0;
};


#endif
