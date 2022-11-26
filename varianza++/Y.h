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
    /*B* goo(B *obj){
      obj->goo();
      B* obj2 = new ClaseC;
      std::cout<<"FOO DESDE Y\n";
      return obj2;
    }*/
    //covarainza si es soportdada
    /*C* goo(B *obj){
      obj->goo();
      C* obj2 = new ClaseC;
      std::cout<<"FOO DESDE Y\n";
      return obj2;
    }*/
     // invalid contravarianza
    A* goo(B *obj){
      obj->goo();
      B* obj2 = new ClaseC;
      std::cout<<"FOO DESDE Y\n";
      return obj2;
    }
    //Cvarainza para el elemento que recibe no es soportada
    // si es soportada
    /*B* goo(C *obj){
      obj->goo();
      B* obj2 = new ClaseC;
      std::cout<<"FOO DESDE Y\n";
      return obj2;
    }*/

    //contravarianza si es soportada
    /*B* goo(A *obj){
      B* obj2 = new ClaseC;
      std::cout<<"FOO DESDE Y\n";
      return obj2;
    }*/
    /*void print(){

    }*/



};


#endif
