import java.util.Scanner;
import java.util.Arrays;
 
public class Main {
 
    public static void main(String[] args) throws Exception {
 
        Scanner sc = new Scanner(System.in);
 
        int N = sc.nextInt();
        int sum = 0;
        int[] A = new int[N];
        int[] B = new int[N];
 
        for(int i=0 ; i<N ; i++) {
            A[i] = sc.nextInt();
        }
        
        for(int i=0 ; i<N ; i++) {
            B[i] = sc.nextInt();
        }
        
        Arrays.sort(A);
        Arrays.sort(B);
        
        for(int i=0 ; i<N ; i++) {
            sum += A[i] * B[N - 1 - i];
        }
        
        System.out.println(sum);
    }
}