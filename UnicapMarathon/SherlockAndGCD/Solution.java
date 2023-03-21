package UnicapMarathon.SherlockAndGCD;

import java.util.*;

public class Solution {
    public static int getGCD(int x, int y) {
        if(y == 0) {
            return x;
        } else {
            return getGCD(y, Math.abs(x-y));
        }

    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        for(int i = 0; i < T; i++) {
            int N = input.nextInt();
            int gcd = input.nextInt();
            for(int j = 0; j < N-1; j++) {
                gcd = getGCD(gcd, input.nextInt());
            }
            if(gcd == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        input.close();
    }
}
