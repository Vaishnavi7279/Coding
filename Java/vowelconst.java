//Java code to count the number of vowels and consonants in the string 
public class vowelconst {
    public static void main(String[] args) {
        String strg="Hello! I am Vaishnavi";  //assigning the string
        System.out.println("The string given is: Hello! I am Vaishnavi");
        int vowel=0;
        int consttt=0;
        int n=strg.length();
        for(int i=0 ; i<n ; i++) {
            char s=strg.charAt(i);
            if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U') {
                vowel++;   //counting vowels
            }
            else {
                consttt++;   //counting consonants
            } 
        }  //for statement closing
        System.out.println("Vowels: " +vowel);
        System.out.println("consttt: " +consttt);
    }  //void function closing
}
