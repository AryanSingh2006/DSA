package ClassesAndObjects;

class BankAccount{
  String name;
  private int Balance;

  public int setBalance(int Balance){
    return this.Balance=Balance;
  }

  public int getBalance(){
    return Balance;
  }

  public void display(){
    System.out.println("Name of the account holder is " + name);
    System.out.println("Account balance is " + Balance);
  }
}

public class Encapsulation{
  public static void main (String args[]){
    BankAccount b1 = new BankAccount();
    b1.name="Aryan";
    b1.setBalance(200);
    b1.display();
  }
}