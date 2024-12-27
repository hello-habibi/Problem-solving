import java.util.List;
import java.util.Scanner;

public class Sgeraj_and_dema {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] cards = new int[n];

        for (int i = 0; i < n; i++) {
            cards[i] = sc.nextInt();
        }
        boolean isSeraj = true;
        int i = 0;
        int j = n - 1;
        int serajSum = 0;
        int demaSum = 0;
        while (i <= j) {
            if (cards[i] > cards[j]) {
                if (isSeraj) {
                    serajSum += cards[i];
                    i++;
                     
                     
                } else {
                    demaSum += cards[i];
                    i++;
                     
                }

            } else {
                if (isSeraj) {
                    serajSum += cards[j];
                    j--;
                     
                } else {
                    demaSum += cards[j];
                    j--;
                     
                }

            }
            isSeraj = !isSeraj;
        }

        System.out.println(serajSum + " " + demaSum);
    }
}
