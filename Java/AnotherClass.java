public class AnotherClass {
    protected int x=5;

//Using access modifiers we implement encapsulation.
//Encapsulation as we already discussed is the mechanism that allows us to restrict access to certain
//components in the objects that we are creating
//We have 4 access modifiers in Java, private, public , protected and package private
//We encountered already with public- meaning access is allowed from anywhere in the code
//We also have seen private- meaning access is allowed from within the same class

//There are some top level elements in java (class, interface, enum)-
//they are top because they are in the root of our file
//they can be only public or package private (if we don't specify public)
//they can't be protected or private

//At member level (variables and methods) we can use private or public as we have seen
//or package private if we don't specify access modifier
//or also protected which is like package private but also allows
//access to classes in other packages that extend this class

    public static void main(String[] args) {
        //public
        //private
        //protected
        //default- not specifying any of the access modifiers (private package)
        AnotherClass a=new AnotherClass();
        a.x=10;
    }
}