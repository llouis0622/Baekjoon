import java.util.*;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
        
		int N = in.nextInt();
		int M = in.nextInt();
		int[][] arr = new int[N][M];
        int min = Math.min(N, M);
        int A = 0;
		int B = 0;

		for(int i=0 ; i<N ; i++) {
			String str = in.next();
            
			for(int j=0 ; j<M ; j++) {
				arr[i][j] = str.charAt(j) - '0';
			}
		}
		
		for(int i=0 ; i<N ; i++) {
			for(int j=0 ; j<M ; j++) {
				for(int k=0 ; k<min ; k++) {
					if(i + k < N && j + k < M) {
						if(arr[i][j] == arr[i][j+k] && arr[i][j] == arr[i+k][j] && arr[i][j] == arr[i+k][j+k]) {
							A = (k + 1) * (k + 1);
							B = Math.max(B, A);
						}
					}
				}
			}
		}
		
		System.out.println(B);
	}
}