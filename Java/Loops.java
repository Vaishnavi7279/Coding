//loops in java 
public class Loops {

    public static void main(String[] args) {
        int num;
        for(num=1 ; num<100 ; num*=2) {
            System.out.println(num);
        }

        int count=0;
        while(count<100) {
            count++;
            if(count%7==0)
                continue;
            System.out.println(count);
        }
        System.out.println(num);
        outer:
        for (num=1 ; num<100 ; num+=2){
            int innerNum=5;
            while(innerNum<10) {
                if (innerNum==7) {
                    break outer;
                }
                System.out.println(innerNum);
                innerNum++;
            }
        }

        // label for outer loop- it's like naming the loop
        outer:
        for (int i = 0; i < 10; i++) {
            inner:
            for (int j = 0; j < 10; j++) {
                if (j == 1)
                    continue;
                //by specifying the label we can break from the outer loop.
                //if we won't specify it we will just break the inner loop
                //we can also use continue with labels
                System.out.println(" value of j = " + j);
            }
            System.out.println("i= " + i);
        }  //end of outer loop
        int count1=100;
        
        do {
            count1++;
            System.out.println(count1);
        } while(count1<100);
        
        while(count1<100) {
            count1++;
            System.out.println(count1);
        }
    }
}