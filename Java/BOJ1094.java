import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int X = in.nextInt();
        int cnt = 0;
        int A = 64;
        
        while(X > 0) {
            if(A > X) A /= 2;
            else {
                cnt++;
                X -= A;
            }
        }
        System.out.println(cnt);
    }
}