import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        while(true) {
            int N = in.nextInt();
            
            if(N == 0) {
                break;
            }
            
            int cnt = 0;
            
            for(int i=N+1 ; i<=2*N ; i++) {
                int j;
                for(j=2 ; j*j <= i ; j++) {
                    if(i % j == 0) {
                        break;
                    }
                }
                if((j*j > i) == (i != 1)) {
                    cnt++;
                }
            }
            System.out.println(cnt);
        }
    }
}