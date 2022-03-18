import java.io.*;
import java.util.*;
 
public class Main {
    public static int[] arr;
	
	public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		arr = new int[N];
		
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        
		for(int i=0 ; i<N ; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}

		Arrays.sort(arr);
		
		int M = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
		
		StringBuilder sb = new StringBuilder();
        
		for(int i=0 ; i<M ; i++) {
            if(binarySearch(Integer.parseInt(st.nextToken())) >= 0) sb.append(1).append('\n');
			else sb.append(0).append('\n');
		}
		System.out.println(sb);
	}

	public static int binarySearch(int key) {
        int A = 0;
		int B = arr.length - 1;
        
		while(A <= B) {
            int X = (A + B) / 2;
            
            if(key < arr[X]) B = X - 1;
			else if(key > arr[X]) A = X + 1;
			else return X;
		}
        
		return -1;
	}
}