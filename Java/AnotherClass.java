public class AnotherClass {
    protected int x=5;

//Using access modifiers we implement encapsulation.
//Encapsulation as we already discussed is the mechanism that allows us to restrict access to certain
//components in the objects that we are creating
//We have 4 access modifiers in Java, private, public , protected and package private
//We encountered already with public- meaning access is allowed from anywhere in the code
//We also have seen private- meaning access is allowed from within the same class

//There are some top level elements in java (class, interface, enum)-
//they are top because they are in the root of our file
//they can be only public or package private (if we don't specify public)
//they can't be protected or private

//At member level (variables and methods) we can use private or public as we have seen
//or package private if we don't specify access modifier
//or also protected which is like package private but also allows
//access to classes in other packages that extend this class

//Classes naming convention is to capitalize the first letter of each word in the name
//For example FlyingCenterSystem
//Classes usually will be public meaning they
//are allowed to be accessed from anywhere in our code
//private means that no other class can enter this class

//member variables or fields are simply variables that declared inside a class
//unlike the local variables that declared inside methods those variables can be accessed
//by different classes and be used inside methods
//In order to define a field we need first an access modifier that works the same way as
//class access modifier and this will determine who allowed to access this field
//usually field will be private unlike class (encapsulation) we are hiding the fields
//from being accessed from anywhere in the code

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

    public static void main(String[] args) {
        //public
        //private
        //protected
        //default- not specifying any of the access modifiers (private package)
        AnotherClass a=new AnotherClass();
        a.x=10;
    }
}