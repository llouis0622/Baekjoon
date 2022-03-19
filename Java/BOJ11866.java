import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		Queue<Integer> queue = new LinkedList<>();
		
		int N = in.nextInt();
		int M = in.nextInt();
        
        for(int i=1 ; i<=N ; i++) {
			queue.add(i);
		}
		
		StringBuilder sb = new StringBuilder();
		sb.append('<');

		while(queue.size() > 1) {
            for(int i=0 ; i<M-1 ; i++) {
				int A = queue.poll();
				queue.offer(A);
			}
            
            sb.append(queue.poll()).append(", ");
		}
        
		sb.append(queue.poll()).append('>');
		System.out.println(sb);
	}
}