import java.util.*;
 
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
        StringTokenizer sub = new StringTokenizer(in.nextLine(), "-");
 
		int sum = Integer.MAX_VALUE;
		
		while(sub.hasMoreTokens()) {
			int res = 0;
            
			StringTokenizer add = new StringTokenizer(sub.nextToken(), "+");

			while(add.hasMoreTokens()) {
				res += Integer.parseInt(add.nextToken());
			}

			if(sum == Integer.MAX_VALUE) {
				sum = res;
			} else {
				sum -= res;
			}
		}
		System.out.println(sum);
	}
}