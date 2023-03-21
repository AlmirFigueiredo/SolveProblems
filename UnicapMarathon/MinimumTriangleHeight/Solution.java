package UnicapMarathon.MinimumTriangleHeight;

import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double b = input.nextInt();
        double a = input.nextInt();
        int h =(int)Math.ceil(2*a/b);
        System.out.println(h);
        input.close();
    }
}
