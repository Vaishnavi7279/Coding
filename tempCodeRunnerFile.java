public class SomeClass {

  public void method()

  {

      System.out.println("method");

  }

  {

      System.out.println("anonymous block");

  }

  public SomeClass()

  {

      System.out.println("constructor");

  }

  static {

      System.out.println("static block");

  }

}
public class Main {

  public static void main(String[] args) {

      SomeClass someClass=new SomeClass();

      someClass.method();

  }

}
