import java.util.*; // Import the Scanner class for user input

public class mod7_primeNumber {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    boolean isPrime = true;
    System.err.print("Enter a number: ");
    int a = scn.nextInt();

    if(a <= 1){
      isPrime = false;
    }
    else{
      for(int i = 2; i*i <= a; i++){
        if(a%i == 0){
          isPrime = false;
          break;
        }
      }
    }

    if(isPrime){
      System.err.println("prime number");
    }
    else{
      System.err.println("not a prime number");
    }
    scn.close();
  }
}
