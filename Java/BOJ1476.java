import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int A = 1;
        int B = 1;
        int C = 1;
        int E = in.nextInt();
        int S = in.nextInt();
        int M = in.nextInt();
        
        for(int i=1 ; ; i++) {
            if(A == E && B == S && C == M) {
                System.out.println(i);
                break;
            }
            
            A += 1;
            B += 1;
            C += 1;
            
            if(A == 16) A = 1;
            if(B == 29) B = 1;
            if(C == 20) C = 1;
        }
    }
}