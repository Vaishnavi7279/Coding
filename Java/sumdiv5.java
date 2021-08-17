//finding the sum of all the numbers divisible by 5 that are greater than 40 and less than 250
public class sumdiv5 {
    //the main function
    public static void main(String[] args) { 
        int total=0;
        for(int j=40 ; j<250 ; j++) {
            if(j%5==0) {
                total=total+j;
            }
        }
        System.out.println("Total Sum= " +total);
    }
}