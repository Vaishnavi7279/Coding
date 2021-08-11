public class basics {
    public static void main(String[] args) {
        //over-under flow
        System.out.println("Max Value Integer:" +Integer.MAX_VALUE); 
        System.out.println("Min Value Integer:" +Integer.MIN_VALUE); 
        System.out.println("Overflow and Underflow:\n " +Integer.MAX_VALUE + 2); //overflow
        System.out.println(Integer.MIN_VALUE - 2); //underflow
        //System.out.println("Underflow: " +Integer.MIN_VALUE - 2); //underflow
        //type-casting
        //widening casting (automatically) IMPILICIT - converting a smaller type to a larger type
        //byte > short > char > int > long > float > double
        byte b=5;
        int inn=b; //byte to int
        System.out.println("b: " +b);
        System.out.println("inn: " +inn);
        //narrowing casting (manually) EXPILICT - converting a larger type to a smaller type
        int a=129;
        byte c=(byte)a; //int to byte
        System.out.println("a: " +a);
        System.out.println("c: " +c);
        double e=10.9999;
        int d=(int)e; //double to int
        System.out.println("e: " +e);
        System.out.println("d: " +d);
    }  
}