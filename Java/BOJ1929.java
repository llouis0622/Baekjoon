import java.util.Scanner;
 
public class Main {
    
	public static boolean[] A;
    
	public static void main(String[] args) {
 
		Scanner in = new Scanner(System.in);
        
		int M = in.nextInt();
		int N = in.nextInt();
		
		A = new boolean[N + 1];
        
		math();
				
		for(int i=M ; i<=N ; i++) {
			if(!A[i]) System.out.println(i);
		}
	}

	public static void math() {
		A[0] = A[1] = true;
		
		for(int i=2 ; i<=Math.sqrt(A.length) ; i++) {
			if(A[i]) continue;
            
			for(int j=i*i ; j<A.length ; j+=i) {
				A[j] = true;
			}
		}
	}
}