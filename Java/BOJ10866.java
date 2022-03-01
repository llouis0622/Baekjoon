import java.io.*;
import java.util.*;
 
public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		ArrayDeque<Integer> num = new ArrayDeque<Integer>();
		StringBuilder sb = new StringBuilder();
 
		int N = Integer.parseInt(br.readLine());
 
		for(int i=0 ; i<N ; i++) {
			String[] A = br.readLine().split(" ");
            
			switch (A[0]) {
				case "push_front": 
					num.addFirst(Integer.parseInt(A[1]));
					break;
				case "push_back": 
					num.addLast(Integer.parseInt(A[1]));
					break;
				case "pop_front": 
					if(num.isEmpty()) {
						sb.append(-1).append('\n');
					} else {
						sb.append(num.pollFirst()).append('\n');
					}
					break;
				case "pop_back": 
					if(num.isEmpty()) {
						sb.append(-1).append('\n');
					} else {
						sb.append(num.pollLast()).append('\n');
					}
					break;
				case "size": 
					sb.append(num.size()).append('\n');
					break;
				case "empty": 
					if(num.isEmpty()) {
						sb.append(1).append('\n');
					} else {
						sb.append(0).append('\n');
					}
					break;
				case "front": 
					if(num.isEmpty()) {
						sb.append(-1).append('\n');
					} else {
						sb.append(num.peekFirst()).append('\n');
					}
					break;
				case "back": 
					if(num.isEmpty()) {
						sb.append(-1).append('\n');
					} else {
						sb.append(num.peekLast()).append('\n');
					}
					break;
			}
		}
		System.out.println(sb);
	}
}