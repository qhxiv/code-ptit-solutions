import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		String s = in.next();
		HashSet<Character> m = new HashSet<>();
		for (int i = 0; i < s.length(); ++i) {
			m.add(s.charAt(i));
		}
		out.print(m.size());

		out.flush();
	}
}