import java.util.Scanner;
 
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int a = in.nextInt();
		int b = in.nextInt();
 
		int num = GCD(a, b);
 
		System.out.println(num);
		System.out.println(a * b / num);
	}
    
	public static int GCD(int a, int b) {
		if(b == 0) {
            return a;
        }

		return GCD(b, a % b);
	}
}