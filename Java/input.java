//taking input from the user in java
import java.util.Scanner;
public class input {
    public static void main(String[] args) {
        System.out.println("Enter your name and age: ");
        //reference variable containing the refrence to the info added by the user
        //sc is an object to the scanner class
        //calling parameterized static object 
        //system.in passed as parameter to the sc object of the scanner class
        Scanner sc=new Scanner(System.in);
          String name=sc.nextLine();  //returning the converted value of the raw data as a string
          int age=sc.nextInt();  //returning the converted value of the raw data as integer
        System.out.println("Name: " +name);
        System.out.println("Age: " +age);
    }
}
