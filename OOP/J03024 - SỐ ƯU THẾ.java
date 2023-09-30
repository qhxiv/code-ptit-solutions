import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
	static String solve(String s) {
		int n = s.length();
		int odd, even;
		odd = even = 0;
		for (int i = 0; i < n; ++i) {
			if (s.charAt(i) < '0' || s.charAt(i) > '9')
				return "INVALID";
			int x = s.charAt(i) - '0';
			if (x % 2 == 0) ++even;
			else ++odd;
		}
		if (n % 2 == 0 && even > odd)
			return "YES";
		if (n % 2 == 1 && even < odd)
			return "YES";
		return "NO";
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