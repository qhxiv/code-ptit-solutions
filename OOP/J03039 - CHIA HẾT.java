import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	static boolean check(BigInteger a, BigInteger b) {
		return a.mod(b) == BigInteger.ZERO;
	}

	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		int t = Integer.parseInt(in.nextLine());
		while (t-- > 0) {
			BigInteger a = new BigInteger(in.next());
			BigInteger b = new BigInteger(in.next());
			if (check(a, b) || check(b, a)) {
				out.println("YES");
			} else out.println("NO");
		}

		out.flush();
	}
}