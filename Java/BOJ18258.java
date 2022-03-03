import java.io.*;
import java.util.*;
 
public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
        StringTokenizer st;
		
		LinkedList<Integer> queue = new LinkedList<>();
		int N = Integer.parseInt(br.readLine());
        
		while(N-- > 0) {
			st = new StringTokenizer(br.readLine(), " ");
			
			switch(st.nextToken()) {
                case "push":
                    queue.offer(Integer.parseInt(st.nextToken()));
                    break;
                    
                case "pop" :
                    Integer A = queue.poll();
                    if(A == null) {
                        sb.append(-1).append('\n');
                    } else {
                        sb.append(A).append('\n');
                    }
                    break;
                    
                case "size":
                    sb.append(queue.size()).append('\n');
                    break;
                    
                case "empty":
                    if(queue.isEmpty()) {
                        sb.append(1).append('\n');
                    } else {
                        sb.append(0).append('\n');
                    }
                    break;
                    
                case "front":
                    Integer B = queue.peek();
                    if(B == null) {
                        sb.append(-1).append('\n');
                    } else {
                        sb.append(B).append('\n');
                    }
                    break;
                    
                case "back":
                    Integer C = queue.peekLast();
                    if(C == null) {
                        sb.append(-1).append('\n');
                    } else {
                        sb.append(C).append('\n');
                    }
                    break;
            }
		}
		System.out.println(sb);
	}
}