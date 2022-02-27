import java.util.Scanner;
 
public class Main {
 
	public static void main(String[] args) {
 
		Scanner in = new Scanner(System.in);
		
		int N = in.nextInt();
		int K = in.nextInt();
        int cnt = 0;
		int[] money = new int[N];
		
		for(int i=0 ; i<N ; i++) {
			money[i] = in.nextInt();
		}
 
		for(int i=N-1 ; i>=0 ; i--) {
			if(money[i] <= K) {
				cnt += (K / money[i]);
				K = K % money[i];
			}
		}
        
		System.out.println(cnt);
	}
}