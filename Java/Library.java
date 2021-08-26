import java.util.Random;

public class Library {
    private String name;
    private String address;
    //The Composition is a way to design or implement the "has-a" relationship.
    //Composition and Inheritance both are design techniques.
    //The Inheritance is used to implement the "is-a" relationship.
    //The "has-a" relationship is used to ensure the code reusability in our program.
    //In Composition, we use an instance variable that refers to another object.

    //The composition relationship of two objects is possible when one object contains
    //another object, and that object is fully dependent on it.
    //The contained object should not exist without the existence of its parent object.
    //In a simple way, we can say it is a technique through which we can describe the
    //reference between two or more classes. And for that, we use the instance variable,
    //which should be created before it is used.

    //Library is a building (inheritance) and has books (composition)
    private Book[] books;

    public Library(String name, String address, Book[] books) {
        this.name = name;
        this.address = address;
        this.books = books;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public Book[] getBooks() {
        return books;
    }

    public void setBooks(Book[] books) {
        this.books = books;
    }

    public Book borrowRandomBook(){
        Random random=new Random();
         int randomId=random.nextInt(books.length)+1;

        for (int i = 0; i < books.length; i++) {
            if(books[i].getId()==randomId){
                books[i].setBorrowed(true);

                return books[i];
            }
        }

       return null;
    }
    //define main
}