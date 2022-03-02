import java.io.*;
 
public class Main {
	static Integer[][] A = new Integer[41][2];
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int T = Integer.parseInt(br.readLine());
		
		A[0][0] = 1;
		A[0][1] = 0;
		A[1][0] = 0;
		A[1][1] = 1;

		while(T --> 0) {
			int N = Integer.parseInt(br.readLine());
            
			Fibonacci(N);
            
			sb.append(A[N][0] + " " + A[N][1]).append('\n');
		}
		System.out.println(sb);
	}
	
	static Integer[] Fibonacci(int N) {
		if(A[N][0] == null || A[N][1] == null) {
			A[N][0] = Fibonacci(N - 1)[0] + Fibonacci(N - 2)[0];
			A[N][1] = Fibonacci(N - 1)[1] + Fibonacci(N - 2)[1];
		}
		return A[N];
	}
}