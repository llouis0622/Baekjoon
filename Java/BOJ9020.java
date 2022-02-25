import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        int T = in.nextInt();
        
        for(int i=0 ; i<T ; i++) {
            int N = in.nextInt();
            int A = N / 2;
            int B = N - A;
            
            while(true) {
                if(num(A) && num(B)) {
                    break;
                }
                else {
                    A--;
                    B++;
                }
            }
            System.out.println(A + " " + B);
        }
    }
    
    static boolean num(int N) {
        boolean prime = true;
        
        for(int i=2 ; i<= Math.sqrt(N) ; i++) {
            if(N % i == 0) {
                prime = false;
            }
        }
        return prime;
    }
}