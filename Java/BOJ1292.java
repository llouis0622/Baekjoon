import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<Integer>();

        int A = in.nextInt();
        int B = in.nextInt();
        int sum = 0;

        for(int i=0 ; i<1000 ; i++) {
            for(int j=0 ; j<=i ; j++) {
                arr.add(i + 1); 
            }
        }

        for(int i=A-1 ; i<=B-1 ; i++) {
            sum += arr.get(i);
        }
        
        System.out.println(sum);
    }
}