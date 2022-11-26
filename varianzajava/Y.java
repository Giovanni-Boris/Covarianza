



public class Y extends X {
  public B foo(B obj){
    obj.too();
    System.out.println("Foo desde Y");
    return new ClaseB();
  };

}
