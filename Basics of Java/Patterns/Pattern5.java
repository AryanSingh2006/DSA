package Patterns;

import java.util.Scanner;

public class Pattern5 {
  public static void main(String args[]) {
    Scanner scn = new Scanner(System.in);
    System.out.print("Enter n: ");
    int n = scn.nextInt();

    // 🔸 Upper half (including middle)
    for (int i = 1; i <= n; i++) {
      // print spaces
      for (int j = 1; j <= n - i; j++) {
        System.out.print(" ");
      }
      // print stars
      for (int k = 1; k <= 2 * i - 1; k++) {
        System.out.print("*");
      }
      System.out.println();
    }

    // 🔸 Lower half
    for (int i = n - 1; i >= 1; i--) {
      // print spaces
      for (int j = 1; j <= n - i; j++) {
        System.out.print(" ");
      }
      // print stars
      for (int k = 1; k <= 2 * i - 1; k++) {
        System.out.print("*");
      }
      System.out.println();
    }

    scn.close();
  }
}