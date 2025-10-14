import java.util.Scanner;

public class mod13_gcdLcm {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

    // Take two numbers as input from the user
    System.out.print("enter a number: ");
    int n1 = scn.nextInt();
    System.err.print("enter second number: ");
    int n2 = scn.nextInt();

    // Store the original values for later use in LCM calculation
    int on1 = n1;
    int on2 = n2;

    // Use Euclid’s algorithm to find GCD
    // Keep finding remainder until remainder becomes 0
    while (n1 % n2 != 0) {
      int rem = n1 % n2; // find remainder
      n1 = n2;           // make n2 the new n1
      n2 = rem;          // make remainder the new n2
    }

    // After the loop, n2 will hold the GCD
    int gcd = n2;

    // Formula to calculate LCM → (n1 * n2) / gcd
    int lcm = (on1 * on2) / gcd;

    // Print GCD and LCM
    System.err.println("gcd: " + gcd);
    System.err.println("lcm: " + lcm);

    scn.close(); // Close the scanner
  }
}
