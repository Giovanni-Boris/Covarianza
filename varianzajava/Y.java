



public class Y extends X {
  public B foo(B obj){
    obj.too();
    System.out.println("Foo desde Y");
    return new ClaseB();
  };
  /*@Override
  public B foo(A obj){
    obj.too();
    System.out.println("Foo desde Y");
    return new ClaseB();
  };
  @Override
  public B foo(C obj){
    obj.too();
    System.out.println("Foo desde Y");
    return new ClaseB();
  };*/
  /*public A foo(B obj){
    obj.too();
    System.out.println("Foo desde Y");
    A obj1 = new ClaseB();
    return obj1;
  };/*
  /*
  @Override
  public C foo(B obj){
    obj.too();
        
    return new ClaseC();
  };*/
}
