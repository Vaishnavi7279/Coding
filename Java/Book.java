public class Book {
   private int id;
   private String title;
   private boolean isBorrowed;


    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public boolean isBorrowed() {
        return isBorrowed;
    }

    public void setBorrowed(boolean borrowed) {
        isBorrowed = borrowed;
    }

    public Book(int id, String title) {
        this.id = id;
        this.title = title;
    }

    public String getShortPlot(){
        return "Basic Plot";
    }
    //define main
}