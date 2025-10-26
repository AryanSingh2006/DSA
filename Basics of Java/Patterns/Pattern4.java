package Patterns;
import java.util.Scanner;

public class Pattern4 {
  public static void main(String args[]) {
    Scanner scn = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int a = scn.nextInt();

    // outer loop → controls number of rows
    for (int i = 1; i <= a; i++) {
      // prints leading spaces
      for (int j = 1; j < i; j++) {
        System.out.print(" ");
      }

      // prints stars (decreasing each row)
      for (int k = a; k >= i; k--) {
        System.out.print("*");
      }

      // move to next line
      System.out.println();
    }

    scn.close();
  }
}
