import java.util.*;
import java.io.*;
 
public class Main {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Integer> stack = new Stack<Integer>();
		
		int T = Integer.parseInt(br.readLine());
		
		for(int i=0 ; i<T ; i++) {
			int N = Integer.parseInt(br.readLine());
			
			if(N == 0) stack.pop();
			else stack.push(N);
		}
		int res = 0;
		
		for(int i : stack) {
			res += i;
		}
 
		System.out.println(res);		
	}
}