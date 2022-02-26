import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        long N = in.nextLong();
        long M = in.nextLong();
        
        long res = GCD(Math.max(N, M), Math.min(N, M));
        
        System.out.println((N * M) / res);
    }
    
    public static long GCD(long A, long B) {
        while(B > 0) {
            long num = A;
            
            A = B;
            B = num % B;
        }
        return A;
    }
}