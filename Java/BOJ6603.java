import java.io.*;
import java.util.*;
 
public class Main {
	static int[] arr;
	static int[] res;
	static int N;
    
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		while(true) {
			StringTokenizer st = new StringTokenizer(br.readLine());
            
			N = Integer.parseInt(st.nextToken());
            
			if(N == 0) {
				break;
			}
			res = new int[N];
			arr = new int[N];
			for(int i=0 ; i<N ; i++) {
				arr[i] = Integer.parseInt(st.nextToken());
			}
			DFS(0, 0);
			
			System.out.println();
		}
	}
	
	private static void DFS(int A, int B) {
		if(B == 6) print();
        
		for(int i=A ; i<N ; i++) {
			res[i] = 1;
            
			DFS(i + 1, B + 1);
            
			res[i] = 0;
		}
	}
	
	private static void print() {
		for(int i=0 ; i<N ; i++) {
			if(res[i] == 1) System.out.print(arr[i] + " ");
		}
        
		System.out.println();
	}
}