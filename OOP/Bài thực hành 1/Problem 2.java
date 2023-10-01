import java.io.*;
import java.util.*;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	static long gcd(long a, long b) {
		if (b == 0) return a;
		return gcd(b, a % b);
	}

	static long lcm(long a, long b) {
		return a / gcd(a, b) * b;
	}

	public static void main(String[] args) {
		int T = Integer.parseInt(in.nextLine());
		for (int tt = 0; tt < T; ++tt) {
			long a = in.nextLong();
			long b = in.nextLong();
			out.println(lcm(a, b) + " " + gcd(a, b));
		}
		out.close();
	}
}