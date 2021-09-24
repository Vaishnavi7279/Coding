//Java Code EXCEPTION HANDLING
//Calculator- division 
import java.util.Scanner;
//import java.lang.Integer;
import java.util.*;
public class division_exp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            try {
                System.out.println("Enter the first number: ");
                int a = sc.nextInt();
                System.out.println("Enter the first number: ");
                int b = sc.nextInt();
                System.out.println("Quotient: "+(a/b));
            }
            catch (InputMismatchException e) {
                System.out.println("java.util.InputMismatchException");
            }
        }
        catch(Exception e) {
            System.out.println(e);
        }
    }
}