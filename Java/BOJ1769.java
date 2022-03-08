import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String arr = br.readLine();
        int cnt = 0;
        
        while(arr.length() != 1) {
            int ans = 0;
            
            for(char ch : arr.toCharArray()) {
                ans += ch - '0';
            }
            
            arr = Integer.toString(ans);
            cnt++;
        }
        if(Integer.parseInt(arr) % 3 != 0) System.out.println(cnt + "\n" + "NO");
        else System.out.println(cnt + "\n" + "YES");
    }
}