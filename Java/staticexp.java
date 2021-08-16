//static variables
class example1 {  //class decalaration and definition
    //if not static i.e. instance variable
    //instance variables are associated with the objects of the class
    int x=10;
    //static variable 
    static int y=20;
    //declaring a function public
    public void func1() {  //instance method
        //defining the function
        int z=15;  //local variable 
        System.out.println("Z: " +z);
    }
    public static void func2() {  //static method
        y=25;  //changing the value of static variable
        System.out.println("Hello! Y: " +y);
    }
}

//main method-called by JVM
public class staticexp {
    public static void main(String[] args) {
        //for calling the nonstatic/instance methods/variable, object needed
        //object creation creates memory allocation
        example1 e1=new example1();  //creates a new object 
        example1 e2=new example1();
        System.out.println(e1.x);
        e1.func1();
        //System.out.println(e2.y); //Not possible since static variable is assigned to class not object of the class
        System.out.println(example1.y);
    }   
}