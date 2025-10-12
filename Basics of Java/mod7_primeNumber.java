import java.util.*; // Import the Scanner class for user input

public class mod7_primeNumber {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in); // Create a Scanner object for taking input
    int count = 0; // Variable to count the number of divisors

    System.out.print("Enter a number: ");
    int a = scn.nextInt(); // Take integer input from the user

    // Check if the number is less than or equal to 1
    // Because 0 and 1 are not prime numbers
    if (a <= 1) {
      System.out.println(a + " is not a prime number");
    } else {
      // Loop through all numbers from 1 to 'a'
      for (int i = 1; i <= a; i++) {
        // Check if 'a' is divisible by 'i'
        if (a % i == 0) {
          count++; // Increment count for every divisor found
        }
      }

      // A prime number has exactly 2 divisors: 1 and itself
      if (count == 2) {
        System.out.println("prime number");
      } else {
        System.out.println("not a prime number");
      }
    }

    scn.close(); // Close the scanner to prevent resource leaks
  }
}
