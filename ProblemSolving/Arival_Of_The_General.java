import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Arival_Of_The_General {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int solderNumber = sc.nextInt();
        int[] height = new int[solderNumber];
        int max = 0;
        int min = 0;
        int maxPosition = 0;
        int minPosition = 0;
        for (int i = 0; i < solderNumber; i++) {
            int temp = sc.nextInt();
            if (i == 0) {
                min = temp;
                max = temp;
            }
            if (temp > max) {
                max = temp;
                maxPosition = i;

            }
            if (temp <= min) {
                min = temp;
                minPosition = i;
            }

            height[i] = temp;

        }
        if (minPosition > maxPosition) {
            System.out.println(maxPosition + solderNumber - minPosition-1);
        } else {
            System.out.println(solderNumber - minPosition + maxPosition - 2);
        }

    }
}
