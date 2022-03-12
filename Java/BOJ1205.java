import java.util.*;

public class Main {
    public static void main (String[]args){
        Scanner in = new Scanner(System.in);
        
        int N = in.nextInt();
        int A = in.nextInt();
        int P = in.nextInt();

        Integer[] arr = new Integer[n];
        for(int i=0 ; i<N ; i++){
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr, Collections.reverseOrder());

        if(N == P && A <= arr[arr.length - 1]) System.out.print(-1);
        else {
            int res = 1;
            
            for(int i=0 ; i<arr.length ; i++){
                if(A < arr[i]) res++;
                else break;
            }
            System.out.print(res);
        }
    }
}