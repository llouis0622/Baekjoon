import java.io.*;
import java.util.*;
 
public class Main {
    public static long C;
	
	public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		
		long A = Long.parseLong(st.nextToken());
		long B = Long.parseLong(st.nextToken());
		C = Long.parseLong(st.nextToken());
		
		System.out.println(pow(A, B));
	}

	public static long pow(long A, long X) {
        if(X == 1) return A % C;
        
        long num = pow(A, X / 2);
        
        if(X % 2 == 1) return (num * num % C) * A % C;
		return num * num % C;
	}
}