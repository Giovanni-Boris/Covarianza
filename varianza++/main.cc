#include "X.h"
#include "Y.h"
#include "ClaseA.h"
#include "ClaseB.h"
#include "ClaseC.h"
int main(){
  X* obj = new Y;
  B* obj2 = new ClaseC;
  obj->goo(obj2);
  //obj->print();

}
