//Simple inheritance in Java
//class definition
class A1 {
    //data members
    int a=5,b=10;

    //function
    void display() {
        System.out.println("A: " +a+ "B: " +b);
    }
}
class A2 extends A1 {
    //data members
    int c=20;

    //functions
    void display() {
        System.out.println("C: " +c);
    }
    void sum() {
        int add=a+b+c;
        System.out.println("Sum: " +add);
    }
}
public class inheritance {
    public static void main(String[] args) {
        //creating the objects
        A1 object=new A1();
        A2 obj=new A2();
        //calling the class method through the objects
        object.display();
        obj.display();
        obj.sum();
    }
}