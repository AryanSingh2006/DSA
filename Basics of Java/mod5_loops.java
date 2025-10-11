public class mod5_loops {
  public static void main(String[] args) {

    // ---------- WHILE LOOP ----------
    int i = 0; // initialize counter
    System.out.println("Before while loop"); // message before loop starts
    
    while (i < 10) { // loop runs while i is less than 10
      System.out.println(i); // print current value of i
      i++; // increase i by 1
    }
    
    System.out.println("After while loop"); // message after loop ends
    System.out.println(); // print a blank line for spacing


    // ---------- FOR LOOP ----------
    System.out.println("Before for loop"); // message before loop starts
    
    for (int j = 0; j < 10; j++) { // initialize j, check condition, then increment
      System.out.println(j); // print current value of j
    }
    
    System.out.println("After for loop"); // message after loop ends
  }
}
