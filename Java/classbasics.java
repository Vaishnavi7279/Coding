public class classbasics {
    public static void main(String[] args) {
        classcar car = new classcar();
        System.out.println(car.getWheels());  
        int sum1=sum(5,6);
        System.out.println(sum1);
        int sum2=sum(3,4);
        System.out.println(sum2);
        int sum3=sum(1,2,3);
        System.out.println(sum3);
        double sum4=sum(1.0,9.0);
        System.out.println(sum4);
    }
   
        //A method is a block of code that can be executed by calling it
        //We can pass data to a method by parameters
        //Methods main purpose is to perform certain actions
        //Methods are also known as functions
        //With methods we can reuse code by defining it only once and using it many times
        //Each method will have a return type unless it's void (not returning anything)
        //Methods can be declared only within a class
        //Declaration of a method will usually start with access modifier such as public private etc..
        //Then we will set the return type such as int String void (void meaning return nothing) etc..
        //Afterwards we will write the method's name (in camelCase) followed by parentheses
        //Inside the parentheses we can declare which parameters the method will receive
        //It's best practice separating different actions into different methods
        //it will help with testing the application and maintaining the code
    
        //method overloading is using the same method name with different amounts and types of parameters
        //in order to overload a method we create a unique method signature we consists of the methods name
        //amount of parameters and their type, naming of parameters isn't required to be the same between the methods
    
        public static int sum(int a, int b) {
            int sum = a + b;
            //System.out.println(sum);
            return sum;
        }
    
        public static int sum(int a, int b, int c) {
            int sum = a + b + c;
            //System.out.println(sum);
            return sum;
        }
    
        public static double sum(double a, double b) {
            return a + b;
        }
}
