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
    }
}
