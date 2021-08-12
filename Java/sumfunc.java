//function calling definition in java
public class sumfunc {
    //defining and declaring the function 
    public static int sum(int num1, int num2) {
        int add=num1+num2;
        return add;
    }
    //the main function
    public static void main(String[] args) {
        //calling the sum function
        //int sum=sum(num1: 10, num2: 20);  //assigning the return value to sum
        int sum=sum(10,8);
        //printing the sum
        System.out.println("Sum= " +sum);
    }
}
