package UnicapMarathon.Pairs;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int target = input.nextInt();
        int array[] = new int[n];
        for(int i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        int k = 0; 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(array[i]-array[j] == target) {
                    k++;
                    break;
                }
            }
        }
        System.out.println(k);
        input.close();
    }
}