import java.util.*;
import java.io.*;

public class Main {
	static int N, M;
	static int A[][], B[][];
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
        A = new int[N][M];
		B = new int[N][M];
		
		for(int i = 0 ; i < N ; i++) {
			String str = br.readLine();
            
			for(int j = 0 ; j < M ; j++) {				
				A[i][j] = str.charAt(j) - '0';
			}
		}
        
		for(int i = 0 ; i < N ; i++) {
			String str = br.readLine();
            
			for(int j = 0 ; j < M ; j++) {				
				B[i][j] = str.charAt(j) - '0';
			}
		}
		
		int cnt = 0;
        
		for(int i = 0 ; i < N ; i++) {
			for(int j = 0 ; j < M ; j++) {
                if(A[i][j] != B[i][j]) {
					if(sol(i,j)) cnt++;
					else {
						System.out.println("-1");
						return;
					}
				}
			}
		}
		
		System.out.println(cnt);
	}
    
    public static boolean sol(int X,int Y) {
        if(X + 3 > N || Y + 3 > M) return false;
		
		for(int i = X ; i <= X + 2 ; i++) {			
			for(int j = Y ; j <= Y + 2 ; j++) {
				A[i][j] = 1 - (A[i][j]);					
			}
		}
		return true;
	}
}