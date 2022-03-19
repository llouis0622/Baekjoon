import java.io.*;
import java.util.*;

public class Main {
    static int[][] arr;
	static int N;
	static int M;
	static boolean[][] bl;
	static int[] DX = {-1, 1, 0, 0};
    static int[] DY = {0, 0, -1, 1};

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
        arr = new int[N][M];

		for(int i = 0; i < N ; i++) {
			String str = br.readLine();

			for(int j = 0 ; j < M ; j++) {
				arr[i][j] = str.charAt(j) - '0';
			}
		}
		
		bl = new boolean[N][M];
		bl[0][0] = true;
		BFS(0, 0);

		System.out.println(arr[N - 1][M - 1]);
	}

	public static void BFS(int X, int Y) {
		Queue<int[]> queue = new LinkedList<>();

		queue.add(new int[] {X, Y});
		
		while(!queue.isEmpty()) {
			int temp[] = queue.poll();
			int A = temp[0];
			int B = temp[1];
			
			for(int i = 0 ; i < 4 ; i++) {
				int AA = A + DX[i];
				int BB = B + DY[i];
				
		        if(AA < 0 || BB < 0 || AA >= N || BB >= M)  continue;
                		   
        		if (bl[AA][BB] || arr[AA][BB] == 0) continue;
                
                queue.add(new int[] {AA, BB});
                
        		arr[AA][BB] = arr[A][B] + 1;
                bl[AA][BB] = true;
			}
		}
	}
}