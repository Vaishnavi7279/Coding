//classes methods method-overloading in java
public class classmethods {
    //method is a function
    //method overloading refers to having different values for the same function
    //defining and declaring the function 
    public static int sum(int num1, int num2) {  //method
        int add=num1+num2;
        return add;
    }
    //the main function
    public static void main(String[] args) {
        //calling the sum function
        int sum,num1,num2;
        sum=sum(num1=10 , num2=20);  //assigning the return value to sum
        sum=sum(10,8);  //overloading method
        //printing the sum
        System.out.println("Sum= " +sum);
    }
}
