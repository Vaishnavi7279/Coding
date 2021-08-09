//prints the fibonacci sequence for values < 100
public class fibonacci {
    public static void main(String[] args) {
        int low=1;
        int high=1;
        System.out.println(low);
        while(high<100) {
            System.out.println(high);
            //calculating the fibonacci number series
            high=low+high;
            low=high-low; //new low is sum - old low i.e. the old high
        }
    }
}
