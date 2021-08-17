//prints the duplicate numbers in the array
public class javacode {
    public static void main(String[] args) {
        int array[]={1,2,2,4,2,5,3,1,7,8};
        System.out.println("The array given is: 1,2,2,4,2,5,3,1,7,8");
        for(int i=0 ; i<10 ; i++) {
            
        }
        if(high<100) {
            System.out.println(high);
            //calculating the fibonacci number series
            high=low+high;
            low=high-low; //new low is sum - old low i.e. the old high
        }
    }
}

//defining and declaring the function to calculate the sum of the numbers  
public static int add(int[] num, int count) {
    int sum=0;
    for(int i=0 ; i<count ; i++) 
            sum=sum+num[i];
    return sum;
}
int count=0;
        //counting the numbers
        for(int j=40 ; j<250 ; j++) {
            if(j%5==0) {
                count++;
            }
        }
        System.out.println("Numbers divisible by 5 [<250 and >40]= " +count);
        int[] num=new int[count];
        //assigning those numbers to an array
        for(int j=40 ; j<250 ; j++) {
            for(int i=0 ; i<count ; i++) {
                if(j%5==0) {
                    num[i]=j;
                }
            }
        }
        //printing the array
        for(int i=0 ; i<count ; i++) {
            System.out.println(+num[i]);
        }
        //calling the function
        int sum=add(num, count);
        //printing the sum
        System.out.println("Total Sum= " +sum);
        //alternative method
