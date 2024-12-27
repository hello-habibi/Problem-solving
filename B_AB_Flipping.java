import java.util.Scanner;

public class B_AB_Flipping {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t > 0) {
            t--;
            int n = sc.nextInt();
            sc.nextLine();
            String str = new String();
            str = sc.nextLine();
            int i = n - 1;
            int j = 0;
            n = str.length();
            // for (int k = 0; k < str.length(); k++) {
            //     if (i == n - 1) {
            //         if (str.charAt(k) == 'A') {
            //             i = k;

            //         }
            //     }
            //     if (j == 0) {
            //         if (str.charAt(n - 1 - k) == 'B') {
            //             j = n - 1 - k;
            //         }
            //     }
            // }
            for(; i>=0 ; i--){
                if(str.charAt(i) == 'B'){
                    break;
                }
            }
            for(; j<n; j++){
                if (str.charAt(j) == 'A') {
                    break;
                    
                }
            }
            if (j > i) {
                System.out.println(i-j);
            } else {
                System.out.println(0);
            }

        }
    }
}