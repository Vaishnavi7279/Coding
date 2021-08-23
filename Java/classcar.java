public class classcar {
    
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

    private int wheels;
    private int creationYear;
    private String type;
    private String color;
    private boolean isFirstHand;
    private double num=2.5;

    //Getters
    public int getWheels(){
        return wheels;
    }

    public String getType(){
        return type;
    }

    //Setters
}

