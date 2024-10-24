import java.util.Scanner;

public class Translation {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String firstWord = sc.nextLine();
        String secondString = sc.nextLine();
        boolean result = true;
        for(int i=0; i<firstWord.length(); i++){
            if(firstWord.charAt(i) != secondString.charAt(secondString.length()-i-1)){
                result = false;
                break;
            }
        }
        if(result){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        
        
    }
}