import java.io.*;
import java.math.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        System.out.println(Fib(N));
    }
 
    public static BigInteger Fib(int N) {
        BigInteger A = BigInteger.valueOf(1);
        BigInteger B = BigInteger.valueOf(1);
        BigInteger C;
        
        for(int j = 2 ; j <= N ; j++) {
            C =  A.add(B);
            A = B;
            B = C;
        }
 
        return A;
    }
}