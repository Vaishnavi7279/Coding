//Java Code to find the element in an array using Binary Search
//creating class binary
public class binary {
    //function for binary search with arguments
    public static void binarySearch(int array[], int first, int last, int element) {
        //dividing the array in half
        int middle=(first+last)/2;  
        while(first<=last) {  
            //checking for element in first half
            if(array[middle]<element) {  
               first=middle+1;     
            } 
            //checking for element with the middle element
            else if(array[middle]==element) {  
               System.out.println("Element is found at index: " + middle);  
               break;  
            }
            //checking in the upper half
            else {  
                last=middle-1;  
            }  
            middle=(first+last)/2;  
        }  
        if(first>last) {  
            System.out.println("Element is not found!");  
        }  
    }  
    public static void main(String args[]) {  
        int array[] = {10,20,30,40,50,60,70,80,90,95};  //assigning the array
        System.out.println("Array: 10,20,30,40,50,60,70,80,90,95");
        int element=30;  //assigning the element to be found
        int last=array.length-1;  
        binarySearch(array,0,last,element);  //calling the binarySeach function
    }  
}
