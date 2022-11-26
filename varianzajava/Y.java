



public class Y extends X {
  /*public B foo(B obj){
    obj.too();
    System.out.println("Foo desde Y");
    B obj2 = new ClaseC();
    return obj;
    };*/
  //Convarainza si es soportada en lo que retorna si es aceptada
  public C foo(B obj){
    obj.too();
    System.out.println("Foo desde covarianza en lo retorna Y");
    C obj2 = new ClaseC();
    return obj2;
  };
 
}
