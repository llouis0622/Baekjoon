import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
	
		int T = input.nextInt();
		
		for(int i=0 ; i<T ; i++) {
			int N = input.nextInt();
			int M = input.nextInt();
			
			int A[][] = new int[N+1][M+1];
			
			for(int n=2 ; n<=N ; n++) {
                A[n][1] = 0;
            }
			
			for(int m=1 ; m<=M ; m++) {
                A[1][m] = m;
            }
			
			for(int x=2 ; x<=N ; x++) {
				for(int y=2 ; y<=M ; y++) {
					A[x][y] = A[x][y-1] + A[x-1][y-1];
				}
			}
			
			System.out.println(A[N][M]);
		}
	}
}