//switch case in java
//enumeration constant
enum Color{
    Red,
    Blue,
    Green
}

public class switchenum {
    public static void main(String[] args) {
        Color color = Color.Red; //defining color
        //switch case
        switch(color) {
            case Red:
                System.out.println("Red!");
                break;
            case Blue:
                System.out.println("Blue!");
                break;
            case Green:
                System.out.println("Green!");
                break;
            default:
                System.out.println("Not known color");
                break;
        }

    }
}