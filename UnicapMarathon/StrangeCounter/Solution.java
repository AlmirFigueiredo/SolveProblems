package UnicapMarathon.StrangeCounter;

import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long time = 1;
        long value = 3;
        long pgFactor = 3;
        while(time <= n) {
            value *= 2;
            time += pgFactor;
            pgFactor *= 2;
        }
        if(time == n) {
            System.out.println(value);
        } else {
            time = (time-2)/2;
            value = (value/2)-(n-time);
            System.out.println(value);
        }
        input.close();
    }
}
