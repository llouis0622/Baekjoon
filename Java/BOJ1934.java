import java.util.*;
 
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int N = in.nextInt();
		StringBuilder sb = new StringBuilder();
		
		for(int i=0 ; i<N ; i++) {
			int A = in.nextInt();
			int B = in.nextInt();
			int C = GCD(A, B);
			
			sb.append(A * B / C).append('\n');
		}
		System.out.println(sb);
	}

	public static int GCD(int A, int B) {
		while(B != 0) {
			int R = A % B;

			A = B;
			B = R;
		}
		return A;
	}
}