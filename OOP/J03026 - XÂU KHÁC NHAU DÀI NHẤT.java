import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
	static int solve(String a, String b) {
		if (!a.equals(b))
			return Math.max(a.length(), b.length());
		return -1;
	}

	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		int t = Integer.parseInt(in.nextLine());
		while (t-- > 0) {
			out.println(solve(in.next(), in.next()));
		}

		out.flush();
	}
}