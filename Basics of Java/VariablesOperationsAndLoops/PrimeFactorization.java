package VariablesOperationsAndLoops;

import java.util.Scanner;

public class PrimeFactorization {
    public static void main(String args[]) {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = scn.nextInt();

        System.out.println("Prime factorization with repetitions: ");
        for (int i = 2; i <= a; i++) {
            while (a % i == 0) {
                System.out.print(i + " "); // print i each time it divides a
                a = a / i; // reduce a by dividing it by i
            }
        }
        scn.close();
    }
}