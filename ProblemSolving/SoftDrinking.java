import java.util.Scanner;

public class SoftDrinking {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, k, l, c, d, p, nl, np;
        n = sc.nextInt();
        k = sc.nextInt();
        l = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        p = sc.nextInt();
        nl = sc.nextInt();
        np = sc.nextInt();
        int ansOne = (k * l) / (n * n);
        int ansTwo = (c * d) / n;
        int ansThree = (p / np) / n;
        if (ansOne < ansTwo) {
            if (ansOne > ansThree) {
                System.out.println(ansThree);
            } else {
                System.out.println(ansOne);
            }
        }else{
            if(ansTwo<ansThree){
                System.out.println(ansTwo);
            }else{
                System.out.println(ansThree);
            }
        }
    }
}
