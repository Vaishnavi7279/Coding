//Constructors in Java
//class definition
class AI {
    //data members
    int id=9;
    String name="Vaishnavi Srivastava";
    //function
    void display() {
        System.out.println("ID: " +id+ " Name: " +name);
    }
}
public class constructors {
    public static void main(String[] args) {
        //creating the objects
        AI obj1=new AI();
        AI obj2=new AI();
        //calling the class method through the objects
        obj1.display();
        obj2.display();
    }
}