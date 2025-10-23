package VariablesOperationsAndLoops;

import java.util.Scanner;

public class mod9_fibonacci {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

    // Take input from the user: how many Fibonacci numbers to print
    System.out.print("Enter the number of Fibonacci numbers to print: ");
    int n = scn.nextInt();

    int a = 0; // First Fibonacci number
    int b = 1; // Second Fibonacci number
    int c; // Variable to store the next Fibonacci number

    // Loop to generate Fibonacci series
    for (int i = 0; i < n; i++) { // Loop n times to print n numbers
      System.out.println(a); // Print the current number
      c = a + b; // Calculate the next number in the series
      a = b; // Shift 'b' to 'a'
      b = c; // Shift 'c' to 'b'
    }

    scn.close(); // Close Scanner to prevent resource leaks
  }
}
