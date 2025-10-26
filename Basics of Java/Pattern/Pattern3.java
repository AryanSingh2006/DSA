package Pattern;
import java.util.Scanner;
public class Pattern3 {
  public static void main(String args[]){
    Scanner scn = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int a = scn.nextInt();

    // outer loop → controls number of rows
    for(int i = 1; i<=a; i++){
      // prints spaces before stars to right-align the pattern
      for(int j = a; j>i ; j--){
        System.out.print(" ");
      }
      
      // prints stars in each row
      for(int k=1; k<=i; k++){
        System.err.print("*");
      }

      // moves to next line after each row
      System.err.println("");
    }

    scn.close();
  }
}
