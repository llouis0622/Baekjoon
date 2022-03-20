import java.util.*;
 
public class Main {
	static char[][] str;
 
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int N = in.nextInt();
        str = new char[N][N];
        
		DOT(0, 0, N, false);
 
		StringBuilder sb = new StringBuilder();
        
		for(int i = 0 ; i < N ; i++) {
			for(int j = 0 ; j < N ; j++) {
				sb.append(str[i][j]);
			}
			sb.append('\n');
		}
		System.out.print(sb);
	}
 
	static void DOT(int X, int Y, int N, boolean bl) {
        if(bl) {
			for(int i = X ; i < X + N ; i++) {
				for(int j = Y ; j < Y + N ; j++) {
					str[i][j] = ' ';
				}
			}
			return;
		}
        
        if(N == 1) {
			str[X][Y] = '*';
			return;
		}
        
        int A = N / 3;
		int cnt = 0;
        
		for(int i = X ; i < X + N ; i += A) {
			for(int j = Y ; j < Y + N ; j += A) {
				cnt++;
                
				if(cnt == 5) DOT(i, j, A, true);
				else DOT(i, j, A, false);
			}
		}
	}
}