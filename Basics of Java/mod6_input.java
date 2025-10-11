import java.util.*;

public class mod6_input {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in); // create Scanner object to take input

    // ---------- Input a number ----------
    System.out.print("Enter a number: ");
    int a = scn.nextInt(); // read an integer from the user

    // ---------- Print numbers from 0 to a ----------
    for (int i = 0; i <= a; i++) {
      System.out.println(i); // print current number
    }

    scn.nextLine(); // consume leftover newline from nextInt()

    // ---------- Input a name ----------
    System.out.print("Enter your name: ");
    String name = scn.nextLine(); // read full line (including spaces)
    System.err.println("Your name is " + name); // print the name

    scn.close(); // close the Scanner to free resources
  }
}
