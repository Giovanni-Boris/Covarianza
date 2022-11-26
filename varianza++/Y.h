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
      std::cout<<"FOO DESDE usando convaraianza en el elemento que recibe Y\n";
      return obj2;
      }*/
    //contravarainza no es soportada para el elemento que reciben
    A* goo(B *obj){
      obj->goo();
      B* obj2 = new ClaseC;
      std::cout<<"FOO DESDE Y\n";
      return obj2;
    }
    //covarianza para el elemnto que reciben no es aceptada o 
    //es metodo sobrecargado o con virtual=0 el compilardor pienza que es 
    //otra funcion
    /*B* goo(C *obj){
      obj->goo();
      B* obj2 = new ClaseC;
      std::cout<<"FOO DESDE covarianza en el elemnto que reciben Y\n";
      return obj2;
    }*/
    //contravarainze para el elemento qeu reciben no es aceptada o
    //es metodo sobrecargado y con virtual =0 el compilador piensa que es otra funcion
    /*B* goo(A *obj){
      B* obj2 = new ClaseC;
      std::cout<<"FOO DESDE contravairanze en el elmento que recibe Y\n";
      return obj2;
    }*/
    


};


#endif
