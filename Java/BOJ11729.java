import java.util.Scanner;
 
public class Main {
 
	public static StringBuilder sb = new StringBuilder();
 
	public static void main(String[] args) {
        
		Scanner in = new Scanner(System.in);
 
		int N = in.nextInt();
 
		sb.append((int)(Math.pow(2, N) - 1)).append('\n');
 
		H(N, 1, 2, 3);
        
		System.out.println(sb);
 
	}
 
	public static void H(int N, int A, int B, int C) {
		if(N == 1) {
			sb.append(A + " " + C + "\n");
			return;
		}

		H(N - 1, A, C, B);

		sb.append(A + " " + C + "\n");
        
		H(N - 1, B, A, C);
	}
}