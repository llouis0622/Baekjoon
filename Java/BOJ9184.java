import java.util.*;
 
public class Main {
	static int[][][] arr = new int[21][21][21];
	
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        
        while(true) {
			int A = in.nextInt();
			int B = in.nextInt();
			int C = in.nextInt();

			if(A == -1 && B == -1 && C == -1) break;
			
			sb.append("w(" + A + ", " + B + ", " + C + ") = ").append(w(A, B, C)).append('\n');
		}
		System.out.println(sb);
	}
	
	static int w(int A, int B, int C) {
		if(num(A, B, C) && arr[A][B][C] != 0) return arr[A][B][C];
		
		if(A <= 0 || B <= 0 || C <= 0) return 1;
		
		if(A > 20 || B > 20 || C > 20) return arr[20][20][20] = w(20, 20, 20);
		
		if(A < B && B < C) return arr[A][B][C] = w(A, B, C - 1) + w(A, B - 1, C - 1) - w(A, B - 1, C);
		
		return arr[A][B][C] = w(A - 1, B, C) + w(A - 1, B - 1, C) + w(A - 1, B, C - 1) - w(A - 1, B - 1, C - 1);
	}

	static boolean num(int A, int B, int C) {
		return 0 <= A && A <= 20 && 0 <= B && B <= 20 && 0 <= C && C <= 20; 
	}
}