import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
	static boolean check(String s) {
		int n = s.length();
		boolean f1, f2, f3, f4;
		f1 = f2 = f3 = f4 = true;
		for (int i = 0; i < n; ++i) {
			char x = s.charAt(i);
			if (i > 0) {
				if (s.charAt(i - 1) >= s.charAt(i))
					f1 = false;
				if (s.charAt(i - 1) != s.charAt(i)) {
					f2 = false;
					if (i < 3)
						f3 = false;
				}
			}
			if (x != '6' && x != '8')
				f4 = false;
		}
		f3 = f3 && (s.charAt(n - 1) == s.charAt(n - 2));
		return f1 || f2 || f3 || f4;
	}

	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		int t = Integer.parseInt(in.nextLine());
		while (t-- > 0) {
			String s = in.next();
			s = s.substring(5, 8) + s.substring(9, 11);
			if (check(s)) out.println("YES");
			else out.println("NO");

			// out.println(s);
		}

		out.flush();
	}
}