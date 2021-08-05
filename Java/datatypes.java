public class datatypes {
    public static void main(String[] args) {
        int myInt=10;
        System.out.println("My Int: " +myInt); //System.out.println(myInt);
        String string="Vaishnavi";
        System.out.println("String: " +string);
        //premitive data-types stored directly in memory in memory location
        byte b=1;
        System.out.println("Byte: " +b);
        char c='a';
        System.out.println("Character: " +c);
        char unicode='\u0044';
        System.out.println("unicode: " +unicode); //defines more characters than Ascii
        short s=120;
        System.out.println("Short: " +s);
        long l=9999999l;
        System.out.println("Long: " +l);
        float f=50.5048f;
        System.out.println("Float: " +f);
        double d= 999.99999;
        System.out.println("Double: " +d);
        int max=Integer.MAX_VALUE;
        System.out.println("Max value:" +max);
        System.out.println("Min value:" +Integer.MIN_VALUE);
        int withUnderscore=5_000_000;
        System.out.println("withUnderscore:" +withUnderscore);
    }
}
