package UnicapMarathon.MiniMaxSum;

import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long a[] = new long[5];
        for(int i = 0; i < 5; i++) {
            a[i] = input.nextInt();
        }
        Arrays.sort(a);
        System.out.printf("%d %d\n", (a[0]+a[1]+a[2]+a[3]), (a[1]+a[2]+a[3]+a[4]));
    
        input.close();
    }
}
