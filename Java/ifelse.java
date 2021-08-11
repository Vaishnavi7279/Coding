//if-else statement in java
//conditional operators:  >   <   ==   !=   >=   <=   &&   ||
public class ifelse {
    public static void main(String[] args){
        String color="Red";
        if(color=="red"){
            System.out.printf("Color: Red\n");
        }
        else if (color=="Blue"){
            System.out.printf("Color: Blue\n");
        }
        else{
            System.out.printf("Color: NA\n");
        }
        //assigning the value as false
        boolean value=false;
        //checks if the value is true ; its not true so gives true
        if(value)  //if(!value): gives false since value is not true
            System.out.println("The boolean is false");
        else
            System.out.println("The boolean is true");
    }
}
