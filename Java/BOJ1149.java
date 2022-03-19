import java.io.*;
import java.util.*;
 
public class Main {
    final static int R = 0;
	final static int G = 1;
	final static int B = 2;
 
	public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
 
		int N = Integer.parseInt(br.readLine());
        int[][] arr = new int[N][3];
 
		for(int i = 0 ; i < N ; i++) {
			st = new StringTokenizer(br.readLine(), " ");
            arr[i][R] = Integer.parseInt(st.nextToken());
			arr[i][G] = Integer.parseInt(st.nextToken());
			arr[i][B] = Integer.parseInt(st.nextToken());
		}

		for(int i = 1 ; i < N ; i++) {
			arr[i][R] += Math.min(arr[i - 1][G], arr[i - 1][B]);
			arr[i][G] += Math.min(arr[i - 1][R], arr[i - 1][B]);
			arr[i][B] += Math.min(arr[i - 1][R], arr[i - 1][G]);
		}
 
		System.out.println(Math.min(Math.min(arr[N - 1][R], arr[N - 1][G]), arr[N - 1][B]));
	}
}