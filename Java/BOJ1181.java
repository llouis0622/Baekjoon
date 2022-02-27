import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    
	public static void main(String[] args) {
    
		Scanner in = new Scanner(System.in);
 
		int N = in.nextInt();
		String[] arr = new String[N];
 
		in.nextLine();
 
		for(int i=0 ; i<N ; i++) {
			arr[i] = in.nextLine();
		}
		
		Arrays.sort(arr, new Comparator<String>() {
			public int compare(String A, String B) {
				if(A.length() == B.length()) {
					return A.compareTo(B);
				} else {
					return A.length() - B.length();
				}
			}
		});
 
		System.out.println(arr[0]);
		
		for(int i=1 ; i<N ; i++) {
			if(!arr[i].equals(arr[i - 1])) {
				System.out.println(arr[i]);
			}
		}
	}
}