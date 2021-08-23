import java.util.Scanner;
//Parsing in java
//Parsing is to read the value of one object to convert it to another type ; moreover like typecasting 
public class parsing {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        System.out.println("Please enter first number");
        String numericString=scanner.next();
        System.out.println("Please enter second number");
        String numericString2=scanner.next();

        //We can convert string to primitive data type by using the parse methods that are in the wrapper classes
        int num=Integer.parseInt(numericString);
        int num2=Integer.parseInt(numericString2);

        System.out.println(num+num2);
    }
}