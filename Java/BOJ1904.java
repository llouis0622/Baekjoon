import java.util.Scanner;
 
public class Main {
	public static int[] A = new int[1000001];
    
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int N = in.nextInt();
        
		A[0] = 0;
		A[1] = 1;
		A[2] = 2;
        
		for(int i=3 ; i < A.length; i++) {
			A[i] = -1;
		}
		
		System.out.println(Num(N));
	}
	
	public static int Num(int N) {
		if(A[N] == -1) {
			A[N] = (Num(N - 1) + Num((N - 2))) % 15746;
		}
        
		return A[N];
	}
}