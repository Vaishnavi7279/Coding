public class BankAccount {
    private String accountNumber;
    private double totalBalance;
    private String accountOwnerName;
    private int accountOwnerAge;
    private String accountOwnerEmail;

    public BankAccount(){
        this("00000",5,"No Name",0,"No mail");
        System.out.println("Empty ctor");
    }

    public BankAccount(double totalBalance){
        this.totalBalance=totalBalance;
    }

    public BankAccount(String accountNumber, double totalBalance, String accountOwnerName, int accountOwnerAge, String accountOwnerEmail) {
        //this();
        System.out.println("parameterized ctor");
        this.accountNumber = accountNumber;
        this.totalBalance = totalBalance;
        this.accountOwnerName = accountOwnerName;
        this.accountOwnerAge = accountOwnerAge;
        this.accountOwnerEmail = accountOwnerEmail;
    }

    public void deposit(double amount) {
        totalBalance += amount;
    }

    public void withdrawal(double amount) {
        if (totalBalance - amount < 0) {
            System.out.println("Sorry you can only withdrawal " + totalBalance);
        } else {
            totalBalance -= amount;
        }
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    public void setAccountNumber(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    public double getTotalBalance() {
        return totalBalance;
    }

    public void setTotalBalance(double totalBalance) {
        this.totalBalance = totalBalance;
    }

    public String getAccountOwnerName() {
        return accountOwnerName;
    }

    public void setAccountOwnerName(String accountOwnerName) {
        this.accountOwnerName = accountOwnerName;
    }

    public int getAccountOwnerAge() {
        return accountOwnerAge;
    }

    public void setAccountOwnerAge(int accountOwnerAge) {
        this.accountOwnerAge = accountOwnerAge;
    }

    public String getAccountOwnerEmail() {
        return accountOwnerEmail;
    }

    public void setAccountOwnerEmail(String accountOwnerEmail) {
        this.accountOwnerEmail = accountOwnerEmail;
    }
}