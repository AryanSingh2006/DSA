package VariablesOperationsAndLoops;

import java.util.*; // Import Scanner class for user input

public class mod8_primeRange {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in); // Create Scanner object for input

    // Take the start and end of the range from the user
    System.out.print("Enter start: ");
    int low = scn.nextInt();
    System.out.print("Enter end: ");
    int high = scn.nextInt();

    // Loop through all numbers from 'low' to 'high'
    for (int i = low; i <= high; i++) {
      boolean isPrime = true; // Assume 'i' is prime initially

      // Numbers less than or equal to 1 are not prime
      if (i <= 1) {
        isPrime = false;
      } else {
        // Check if 'i' has any divisors other than 1 and itself
        for (int j = 2; j < i; j++) { // Loop from 2 to i-1
          if (i % j == 0) { // If 'i' is divisible by 'j'
            isPrime = false; // Not a prime number
            break; // Exit loop early since we found a divisor
          }
        }

        // Print result for the current number
        if (isPrime) {
          System.out.println(i + " is Prime Number");
        } else {
          System.out.println(i + " is not a Prime Number");
        }
      }
    }

    scn.close(); // Close Scanner to free resources
  }
}
