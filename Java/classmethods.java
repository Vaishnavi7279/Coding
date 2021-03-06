//classes methods method-overloading in java
public class classmethods {
    //method is a function
    //method overloading refers to having different values for the same function
    //defining and declaring the function 

    //A method is a block of code that can be executed by calling it
    //We can pass data to a method by parameters
    //Methods main purpose is to perform certain actions
    //Methods are also known as functions
    //With methods we can reuse code by defining it only once and using it many times
    //Each method will have a return type unless it's void (not returning anything)
    //Methods can be declared only within a class
    //Declaration of a method will usually start with access modifier such as public private etc..
    //Then we will set the return type such as int String void (void meaning return nothing) etc..
    //Afterwards we will write the method's name (in camelCase) followed by parentheses
    //Inside the parentheses we can declare which parameters the method will receive
    //It's best practice separating different actions into different methods
    //it will help with testing the application and maintaining the code
    
    //method overloading is using the same method name with different amounts and types of parameters
    //in order to overload a method we create a unique method signature we consists of the methods name
    //amount of parameters and their type, naming of parameters isn't required to be the same between the methods
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
