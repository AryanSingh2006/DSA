import java.util.*;

public class mod10_countDigits {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in); // Create Scanner object for user input

    System.err.print("Enter a number: ");
    int n = scn.nextInt(); // Read the number from user

    int count = 0; // Initialize count of digits to 0

    // Loop until the number becomes 0
    while(n != 0){
      n = n / 10; // Remove the last digit of the number
      count++;    // Increment the digit count
    }

    // Print the total number of digits
    System.err.println("The digits in this number is " + count);

    scn.close(); // Close Scanner to prevent resource leaks
  }
}
