import java.util.*;
import java.io.*;

public class Main {
	public static void main(String args[]) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
		StringBuilder sb = new StringBuilder();
        
		int N = Integer.parseInt(br.readLine());
		Queue<Integer> queue = new LinkedList<Integer>();
		int back = -1;
        
		for(int i=0 ; i<N ; i++) {
			st = new StringTokenizer(br.readLine());
			String A = st.nextToken();
            
			switch(A) {
			case "push":
				back = Integer.parseInt(st.nextToken());
				queue.offer(back);	
				break;
			case "pop":
				if(queue.isEmpty()) {
					sb.append("-1").append("\n");
					break;
				}
				sb.append(queue.poll()).append("\n");
				break;
			case "size":
				sb.append(queue.size()).append("\n");
				break;
			case "empty":
				sb.append(queue.isEmpty() ? 1 : 0).append("\n");
				break;
			case "front":
				sb.append(queue.isEmpty() ? -1 : queue.peek()).append("\n");
				break;
			case "back":
				sb.append(queue.isEmpty() ? -1 : back).append("\n");
				break;
			}
		}
		System.out.print(sb);
	}
}