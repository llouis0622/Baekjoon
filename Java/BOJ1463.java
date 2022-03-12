import java.util.*;

public class Main {
    static Integer[] dp;
 
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
 
		int N = in.nextInt();
        dp = new Integer[N + 1];
		dp[0] = dp[1] = 0;
 
		System.out.print(num(N));
	}
 
	static int num(int N) {
        if (dp[N] == null) {
            if (N % 6 == 0) dp[N] = Math.min(num(N - 1), Math.min(num(N / 3), num(N / 2))) + 1;
			else if (N % 3 == 0) dp[N] = Math.min(num(N / 3), num(N - 1)) + 1;
			else if (N % 2 == 0) dp[N] = Math.min(num(N / 2), num(N - 1)) + 1;
			else dp[N] = num(N - 1) + 1;
		}
		return dp[N];
	}
}