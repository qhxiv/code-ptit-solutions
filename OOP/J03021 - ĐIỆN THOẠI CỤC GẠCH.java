import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
	static boolean check(String s) {
		int l = 0, r = s.length() - 1;
		while (l < r) {
			if (s.charAt(l) != s.charAt(r))
				return false;
			++l; --r;
		}
		return true;
	}

	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		HashMap<Character, Integer> m = new HashMap<>();

		for (int i = 0; i < 'o' - 'a' + 1; ++i) {
			m.put((char)('a' + i), 2 + i/3);
		}
		m.put('p', 7);
		m.put('q', 7);
		m.put('r', 7);
		m.put('s', 7);
		m.put('t', 8);
		m.put('u', 8);
		m.put('v', 8);
		m.put('w', 9);
		m.put('x', 9);
		m.put('y', 9);
		m.put('z', 9);
		
		int t = Integer.parseInt(in.nextLine());
		while (t-- > 0) {
			String s = in.next().toLowerCase();
			String a = "";
			int n = s.length();
			for (int i = 0; i < n; ++i) {
				a += m.get(s.charAt(i));
			}
			if (check(a))
				System.out.println("YES");
			else System.out.println("NO");
		}

		out.flush();
	}
}