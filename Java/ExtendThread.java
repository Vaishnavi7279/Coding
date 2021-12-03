//implementation using thread class
class ExtendThread extends Thread{
    public void test() {
        System.out.println("Extending Thread Class method"); 
    }
    public static void main(String args[]) { 
        ExtendThread obj=new ExtendThread();
        obj.test();
    } 
}