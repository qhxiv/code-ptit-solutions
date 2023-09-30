import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
	static String solve(String s) {
		int l = 0, r = s.length() - 1;
		int cnt = 0;
		while (l < r) {
			if (s.charAt(l) != s.charAt(r)) ++cnt;
			if (cnt > 1) return "NO";
			++l; --r;
		}
		if (s.length() % 2 == 0 && cnt == 0)
			return "NO";
		return "YES";
	}

	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		int t = Integer.parseInt(in.nextLine());
		while (t-- > 0) {
			out.println(solve(in.next()));
		}

		out.flush();
	}
}