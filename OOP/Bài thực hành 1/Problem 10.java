import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Stack;

public class Main {
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		String s = in.next();
		Stack<Character> st = new Stack<>();
		for (int i = 0; i < s.length(); ++i) {
			if (!st.empty() && st.peek() == s.charAt(i)) {
				st.pop();
			} else st.push(s.charAt(i));
		}
		Stack<Character> st1 = new Stack<>();
		while (!st.empty()) {
			st1.push(st.peek());
			st.pop();
		}
		if (st1.empty()) {
			out.print("Empty String");
		}
		while (!st1.empty()) {
			out.print(st1.peek());
			st1.pop();
		}

		out.flush();
	}
}