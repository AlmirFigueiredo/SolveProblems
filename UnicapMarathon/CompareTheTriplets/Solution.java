package UnicapMarathon.CompareTheTriplets;

import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a[] = new int[3];
        int b[] = new int[3];
        for(int i = 0; i < 6; i++) {
            if( i < 3) {
                a[i] = input.nextInt();
            } else {
                b[i%3] = input.nextInt();
            }
        }
        int resultA = 0;
        int resultB = 0;
        for(int i = 0; i < 3; i++) {
            if(a[i] > b[i]) {
                resultA += 1;
            } else if(a[i] < b[i]) {
                resultB += 1;
            } else {
                continue;
            }   
        }
        System.out.printf("%d %d\n", resultA, resultB);
        input.close();
    }
}
