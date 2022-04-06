import java.util.*;
 
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
 
		String str;
		
		while(true) {		
			str = in.nextLine();
			
			if(str.equals(".")) break;

			System.out.println(bracket(str));
		}
	}
	
	public static String bracket(String str) {
        Stack<Character> stack = new Stack<>();
		
		for(int i = 0; i < str.length(); ++i) {
            char ch = str.charAt(i);
            if(ch == '(' || ch == '[') stack.push(ch);
            else if(ch == ')') {
                if(stack.empty() || stack.peek() != '(') return "no";
				else stack.pop();
			} else if(ch == ']') {
                if(stack.empty() || stack.peek() != '[') return "no";
				else stack.pop();
			}
		}
		
		if(stack.empty()) return "yes";
		else return "no";
	}
}