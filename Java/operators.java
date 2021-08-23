public class operators {
    public static void main(String[] args) {
        int myInt=10;
        System.out.println("My Int: " +myInt);
        int num=10-5*3;
        System.out.println(num);
        // + - * / % Follows BODMAS
        int modulo=16%3;
        System.out.println(modulo);
        int x=1;
        int y=3;
        //x and y are operands ; + is operator
        int sum=x+y;
        System.out.println(sum);
        //Pre-Post Increment operators
        int a=10;
        //first evaluates then assigns
        System.out.println("Pre-increment: " + ++a);
        //assigns the given exp then evaluates
        System.out.println("Post-increment: " + a++);
	    int sum1= 5+9;
        //Shorthand Operators
	    sum1=sum+1;
        System.out.println(sum1);
        sum1+=1;
        System.out.println(sum1);
        sum1*=2;
        int anotherInteger=10;
        ++anotherInteger;
        System.out.println(anotherInteger);

        boolean isOver18=true;
        if(!isOver18) {
            System.out.println("You are not allowed to buy this product");
        }

        String operation = "Sum";
        int numberA = 10;
        int numberB = 5;
        int result;
        if (operation == "sum")
            result = numberA + numberB;
        else
            result = numberA - numberB;

        //ternary if ?: is a shortcut to assigning two values to a variable
        //depending on a given condition

        int result2 = operation == "sum" ? numberA + numberB : numberA - numberB;
        System.out.println(result2);
    }
}
