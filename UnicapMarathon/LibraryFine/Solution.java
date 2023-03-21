package UnicapMarathon.LibraryFine;

import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int d = input.nextInt();
        int m = input.nextInt();
        int y = input.nextInt();
        int d2 = input.nextInt();
        int m2 = input.nextInt();
        int y2 = input.nextInt();
        if(d <= d2 && m <= m2 && y <= y2 || (y<y2) || (y==y2 && m<m2)) {
            System.out.println(0);
        } else if(y==y2 && m2==m) {
            System.out.println(15*(d-d2));
        } else if(y==y2) {
            System.out.println(500*(m-m2));
        } else {
            System.out.println(10000);
        }
        input.close();
    }
}
