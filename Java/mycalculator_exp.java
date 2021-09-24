//Java Code EXCEPTION HANDLING
//Calculator to find the power of an integer
import java.util.Scanner;
class MyCalculator {
    public static int power(int a, int b) throws Exception {
        if(a<0 || b<0) {
            throw new Exception ("n or p should not be negative.");
        }
        else if(a==0 && b==0)
        {
            throw new Exception ("n and p should not be zero.");
        }
        else {
            return((int)Math.pow(a,b));
        }
    }
}
public class mycalculator_exp {
    public static final MyCalculator my_calculator = new MyCalculator();
    public static final Scanner in = new Scanner(System.in);
    public static void main(String[] args) {
        int i=1;
        System.out.println("Calculating the power\nEnter the base: ");
        while (i==1 && in .hasNextInt()) {       
            int a = in .nextInt();
            System.out.println("Enter the power: ");
            int b = in .nextInt();
            try {
                System.out.println(MyCalculator.power(a, b));
            } catch (Exception e) {
                System.out.println(e);
            }
            i=i+1;
        }
    }
}