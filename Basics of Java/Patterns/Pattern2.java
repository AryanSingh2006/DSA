package Patterns;

import java.util.*;

public class Pattern2 {
  public static void main(String args[]) {
    Scanner scn = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int a = scn.nextInt();
    for (int i = 1; i <= a; i++) {
      for (int j = a; j >= i; j--) {
        System.out.print("*");
      }
      System.out.println("");
    }
    scn.close();
  }
}
