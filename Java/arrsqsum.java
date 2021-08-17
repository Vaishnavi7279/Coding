//finding the sum of the square of numbers entered by the user in a 10 digit array
import java.util.Scanner;
public class arrsqsum {
    //defining and declaring the function to calculate the sum of the numbers  
    public static int add(int[] array) {
        int sum=0;
        for(int i=0 ; i<10 ; i++) 
                sum=sum+array[i];
        return sum;
    }
    //the main function
    public static void main(String[] args) {
        int[] array=new int[10];
        //entering the numbers
        System.out.println("Enter 10 numbers in the array: ");
        for(int i=0 ; i<10 ; i++) {
            Scanner sc=new Scanner(System.in);
                 array[i]=sc.nextInt();
        }    
        //squaring the digits of the array
        for(int i=0 ; i<10 ; i++) {
            array[i]=array[i]*array[i];
        }
        //printing the array
        for(int i=0 ; i<10 ; i++) {
            System.out.println(+array[i]);
        }
        //calling the function
        int sum=add(array);
        //printing the sum
        System.out.println("Total Sum= " +sum);
    }
}