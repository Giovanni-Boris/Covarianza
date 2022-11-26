



public class Y extends X {
  /*public B foo(B obj){
    obj.too();
    System.out.println("Foo desde Y");
    B obj2 = new ClaseC();
    return obj;
    };*/
  //Convarainza si es soportada en lo que retorna si es aceptada
  /*public C foo(B obj){
    obj.too();
    System.out.println("Foo desde covarianza en lo retorna Y");
    C obj2 = new ClaseC();
    return obj2;
  };*/
  //contravarianza no es sopoirtada Y cannot overide foo(B) in X
  /*public A foo(B obj){
    obj.too();
    System.out.println("Foo desde contravarianza en lo que retorna Y");
    B obj2 = new ClaseC();
    return obj;
  };*/
  //Covarainza para el elemento que recibe no es aceptado se sobreescribe el metodo
  /*public B foo(C obj){
    obj.too();
    System.out.println("Foo desde  covarainza en lo que recibeY");
    B obj2 = new ClaseC();
    return obj;
  };*/
 
  //Contravarainza para el elemento que recibe no es aceptado se sobreescribe el metodo

  public B foo(A obj){
    obj.too();
    System.out.println("Foo contravarainza en lo que recibe desde Y");
    B obj2 = new ClaseC();
    return obj2;
  };



}
