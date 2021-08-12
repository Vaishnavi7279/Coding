//strings in JAVA
import java.text.MessageFormat;

public class strings {
    public static void main(String[] args) {
        String str="Hello world!"; //string
        System.out.println(str);  //printing the string str
        System.out.println("Hello!!!");  //prints hello
        //formatted strings
        //printing format variables
        int year=2021;
        System.out.printf("Year= %d\n", year);  //with data formatting
        String fstr=String.format("I am %s\n I am %d years old\n","Vaishnavi",18);  //string with data specifiers
        System.out.printf(fstr);  //prints the string
        //printing format variables in different syntax
        String msg=MessageFormat.format
             (msg= "Hi, I am {0}\nI am {1} years old\nThis is {2} year" ,"Vaishnavi" ,18 ,year);
        System.out.printf(msg);
        //string functions
        String operation= "sum";
        System.out.println("\nSum= " +operation);
        int num1=10;
        int num2=20;
        int result;
        if(operation=="sum") {
            result=num1+num2;
        }
        else {
            result=num1-num2;
        }
        System.out.println("Result= " +result);
        //ternary if
        int result2 = operation == "sum" ? num1+num2:num2-num1;
        //if the operation = sum, then first statement will execute else other statement will execute
        System.out.println("Result2= " +result2);
    }
}
