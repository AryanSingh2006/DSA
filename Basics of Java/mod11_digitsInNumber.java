import java.util.*;

public class mod11_digitsInNumber {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in); // Scanner for user input

    System.err.print("Enter a number: ");
    int n = scn.nextInt(); // Read the number from the user

    int count = 0;        // To count the number of digits
    int temp = n;         // Temporary variable to preserve original number

    // Step 1: Count the number of digits
    while (temp != 0) {
      temp = temp / 10; // Remove last digit
      count++;          // Increment count
    }

    // Step 2: Calculate the highest power of 10 for the number
    int div = (int) Math.pow(10, count - 1); // e.g., 157 → div = 100

    // Step 3: Print digits in order
    while (n != 0) {
      int q = n / div;        // Get the first digit
      System.err.println(q);  // Print the digit
      n = n % div;            // Remove the printed digit
      div = div / 10;         // Reduce divisor to next lower power of 10
    }

    // Step 4: Print total number of digits
    System.err.println("The number of digits in the int was: " + count);

    scn.close(); // Close Scanner to prevent resource leaks
  }
}
