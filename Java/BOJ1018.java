import java.util.Scanner;
 
public class Main {
	public static boolean[][] arr;
	public static int min = 64;
 
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
 
		int N = in.nextInt();
		int M = in.nextInt();
		arr = new boolean[N][M];

		for(int i=0 ; i<N ; i++) {
			String str = in.next();
			
			for(int j=0 ; j<M ; j++) {
				if(str.charAt(j) == 'W') arr[i][j] = true;
                else arr[i][j] = false;
			}
		}
		
		int Row = N - 7;
		int Col = M - 7;
 
		for(int i=0 ; i<Row ; i++) {
			for(int j=0 ; j<Col ; j++) {
				Search(i, j);
			}
		}
		System.out.println(min);
	}
 
	
	public static void Search(int a, int b) {
		int X = a + 8;
		int Y = b + 8;
		int cnt = 0;
		boolean bl = arr[a][b];
 
		for(int i=a ; i<X ; i++) {
			for(int j=b ; j<Y ; j++) {
				if(arr[i][j] != bl) cnt++;

				bl = (!bl);
			}
			bl = !bl;
		}
		cnt = Math.min(cnt, 64 - cnt);
		min = Math.min(min, cnt);
	}
}