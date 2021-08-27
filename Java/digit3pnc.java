//Write a program to accept three digits (i.e., 0 - 9) and print all its possible combinations.   
//(For example if the three digits are 1, 2, 3 than all possible combinations are : 123, 132, 213, 231, 312, 321.)
import java.util.Scanner;
public class digit3pnc {
    public static void main(String[] args) {
        System.out.println("Enter 3 digits: ");
        Scanner sc=new Scanner(System.in);
           int num1=sc.nextInt();
           int num2=sc.nextInt();
           int num3=sc.nextInt();
        System.out.println("Digits entered are: " +num1 +"," +num2 +"," +num3);
    }

}