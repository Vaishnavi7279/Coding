//taking input from the user in number and printing the corresponding month to the number
import java.util.Scanner;
public class inputnummonth {
    public static void main(String[] args) {
        System.out.println("Enter a number[>1 and <12]: ");
        Scanner sc=new Scanner(System.in);
          int num=sc.nextInt();  //entering the number
        if(num==1) 
           System.out.println("Number:" +num +"\nMonth: January");
        if(num==2) 
           System.out.println("Number:" +num +"\nMonth: February");
        if(num==3) 
           System.out.println("Number:" +num +"\nMonth: March");
        if(num==4) 
           System.out.println("Number:" +num +"\nMonth: April");
        if(num==5) 
           System.out.println("Number:" +num +"\nMonth: May");
        if(num==6) 
           System.out.println("Number:" +num +"\nMonth: June");
        if(num==7) 
           System.out.println("Number:" +num +"\nMonth: July");
        if(num==8) 
           System.out.println("Number:" +num +"\nMonth: August");   
        if(num==1) 
           System.out.println("Number: " +num +"\nMonth: September");
        if(num==1) 
           System.out.println("Number:" +num +"\nMonth: October");
        if(num==1) 
           System.out.println("Number:" +num +"\nMonth: November");
        if(num==1) 
           System.out.println("Number:" +num +"\nMonth: December");
    }
}
