//strings in JAVA
import java.text.MessageFormat;

public class strings {
    public static void main(String[] args) {
        String str="Hello world!"; //string
        System.out.println("Hello");
        //formatted strings
        //printing format variables
        int year=2021;
        System.out.printf("Year= %d", year);
        String fstr=String.format("I am %s\n I am %d years old","Vaishnavi",18);
        System.out.printf(fstr);
        //printing format variables in different syntax
        String msg=MessageFormat.format
             (pattern: "hello, I am {0}\n I am {1} years old\n This is {2} year","Vaishnavi",18,year);
        System.out.printf(msg);
    }
}
