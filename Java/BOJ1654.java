import java.util.*;
 
public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
 
		int K = in.nextInt();
		int N = in.nextInt();
        int[] arr = new int[K];
        long A = 0;
        long B = 0;
        long C = 0;

		for(int i = 0 ; i < K ; i++) {
			arr[i] = in.nextInt();
            
			if(A < arr[i]) A = arr[i];
		}

		A++;
 
		while(C < A) {
            long cnt = 0;
            B = (A + C) / 2;
            
            for(int i = 0 ; i < arr.length ; i++) {
				cnt += (arr[i] / B);
			}
			
			if(cnt < N) A = B;
			else C = B + 1;
		}
        
		System.out.println(C - 1);
	}
}