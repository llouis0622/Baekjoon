import java.util.Scanner;
 
public class Main {
    
	public static void main(String[] args) {
 
		Scanner in = new Scanner(System.in);
 
		int[] cnt = new int[10];
		int N = in.nextInt();
 
		while(N != 0) {
			cnt[N % 10]++;
			N /= 10;
		}
 
		for(int i=9 ; i>=0 ; i--) {
			while(cnt[i]-- > 0) {
				System.out.print(i);
			}
		}
	}
}