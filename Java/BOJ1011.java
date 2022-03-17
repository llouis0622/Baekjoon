import java.util.*;
 
public class Main {
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
 
		int T = in.nextInt();
		
		for(int i=0 ; i<T ; i++) {
            int X = in.nextInt();
			int Y = in.nextInt();
            int N = Y - X;
            int A = (int)Math.sqrt(N);
            
			if(A == Math.sqrt(N)) System.out.println(2 * A - 1);
			else if(N <= A * A + A) System.out.println(2 * A);
			else System.out.println(A * 2 + 1);
		}
	}
}