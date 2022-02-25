import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
        
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
		int M = Integer.parseInt(br.readLine());
		int N = Integer.parseInt(br.readLine());
		int sum = 0;
		int min = N;
        
		for(int i=M ; i<=N ; i++) {
            int cnt = 0;
            
			if(i == 1) {
				cnt++;
			}
            
			for(int j=2 ; j<i ; j++) {
				if(i % j == 0) {
					cnt++;
                    break;
				} 
			}
            
            if(cnt == 0) {
                sum += i;
                
                if(min > i) {
                    min = i;
                }
            }
	    }
        if(sum == 0) {
            System.out.println(-1);
        }
        else {
            System.out.println(sum + "\n" + min);
        }
    }
}