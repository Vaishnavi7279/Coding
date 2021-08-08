public class basics {
    public static void main(String[] args) {
        //over-under flow
        System.out.println(Integer.MAX_VALUE+2); //overflow
        System.out.println(Integer.MIN_VALUE-2); //underflow
        //type-casting
        //widening casting (automatically) IMPILICIT - converting a smaller type to a larger type
        //byte > short > char > int > long > float > double
        byte b=5;
        int inn=b; //byte to int
        //narrowing casting (manually) EXPILICT - converting a larger type to a smaller type
        int a=129;
        c=(byte)a; //int to byte
        System.out.println(a);
        double e=10.9999;
        int d=(int)e; //double to int
        System.out.println(e);
    }
    
}