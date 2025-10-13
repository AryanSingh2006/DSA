import java.util.*; // Importing Scanner class for user input

public class mod12_reverceOfNumber {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in); // Create Scanner object for input
    System.err.print("Enter a number: ");
    int a = scn.nextInt(); // Take integer input from the user

    // Loop continues until 'a' becomes 0
    while (a != 0) {
      int b = a % 10; // Get the last digit of the number
      System.err.println(b); // Print the digit (this gives reverse order)
      a = a / 10; // Remove the last digit from 'a'
    }

    scn.close(); // Close the Scanner to prevent resource leak
  }
}
