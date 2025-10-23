package VariablesOperationsAndLoops;

import java.util.*; // Import the Scanner class for user input

public class mod7_primeNumber {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in); // Create a Scanner object for taking input
    boolean isPrime = true; // Assume the number is prime initially

    System.out.print("Enter a number: ");
    int a = scn.nextInt(); // Take integer input from the user

    // Check if the number is less than or equal to 1
    // Because 0 and 1 are not prime numbers
    if (a <= 1) {
      isPrime = false; // Set flag to false for non-prime numbers
    } else {
      // Loop from 2 to sqrt(a) using i*i <= a
      // Check only possible divisors up to the square root
      for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) { // If 'a' is divisible by 'i', it is not prime
          isPrime = false; // Set flag to false
          break; // Exit loop early since we found a divisor
        }
      }
    }

    // Print the result based on the isPrime flag
    if (isPrime) {
      System.out.println("prime number");
    } else {
      System.out.println("not a prime number");
    }

    scn.close(); // Close the Scanner to prevent resource leaks
  }
}
