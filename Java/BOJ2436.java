import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
        
		int A = Integer.parseInt(st.nextToken());
		int B = Integer.parseInt(st.nextToken());
		
		long N = (long)A * B;
		
		int X = 0;
        int Y = 0;
		
		for(int i = A ; i<= Math.sqrt(N) ; i += A) {
			if(N % i == 0 && GCD(i, N / i) == A) {
				X = i;
				Y = (int)(N / i);
			}
		}
		
		System.out.println(X + " " + Y);
	}
    
	public static long GCD(long X, long Y) {
		return X % Y == 0 ? Y : GCD(Y, X % Y);
	}
}