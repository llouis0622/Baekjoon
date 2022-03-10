import java.util.*;
 
public class Main {
    static int[] arr;
	static Integer[] str;
	static int max;
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int N = in.nextInt();
        
        arr = new int[N];
		str = new Integer[N];
		
		for(int i=0 ; i<N ; i++) {
			arr[i] = in.nextInt();
		}
        
		str[0] = arr[0];
		max = arr[0];

		search(N - 1);
		
		System.out.println(max);
	}
	
	static int search(int N) {
		if(str[N] == null) {
            str[N] = Math.max(search(N - 1) + arr[N], arr[N]);
			max = Math.max(str[N], max);
		}
		return str[N];
	}
}