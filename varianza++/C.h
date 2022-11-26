#ifndef C_H
#define C_H
#include "B.h"
class C:public B {
  public:
    //void goo();
    //void too();
    virtual void zoo()=0;
};


#endif
