import java.util.Scanner;
 
public class Main {
    
	public static void main(String[] args) {
        
		Scanner in = new Scanner(System.in);
		
		int N = in.nextInt();
		int[] arr = new int[8001];
		int sum = 0;
		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;
		int mid = 4001;
		int mode = 4001;
		
		for(int i=0 ; i<N ; i++) {
			int value = in.nextInt();
            
			sum += value;
			arr[value + 4000]++;
		
			if(max < value) {
				max = value;
			}
            
			if(min > value) {
				min = value;
			}
		}

		int cnt = 0;
		int num = 0;
		boolean check = false;	 
		
		for(int i=min+4000 ; i<=max+4000 ; i++) {
			if(arr[i] > 0) {
				if(cnt < (N + 1) / 2) {
					cnt += arr[i];
					mid = i - 4000;
				}

				if(num < arr[i]) {
					num = arr[i];
					mode = i - 4000;
					check = true;
				} else if(num == arr[i] && check == true) {
					mode = i - 4000;
					check = false;					
				}
			}
		}
		
		System.out.println((int)Math.round((double)sum / N));
		System.out.println(mid);
		System.out.println(mode);
		System.out.println(max - min); 
	}
}