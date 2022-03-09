import java.io.*;
import java.math.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(" ");

        int N = Integer.parseInt(str[0]);
        int M = Integer.parseInt(str[1]);

        BigInteger A = BigInteger.ONE;
        BigInteger B = BigInteger.ONE;

        for(int i=0 ; i<M ; i++) {
            A = A.multiply(new BigInteger(String.valueOf(N - i)));
            B = B.multiply(new BigInteger(String.valueOf(i + 1)));
        }
        BigInteger ans = A.divide(B);

        System.out.println(ans);
    }
}