import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		int t = Integer.parseInt(in.nextLine());
		while (t-- > 0) {
			BigInteger a = new BigInteger(in.next());
			BigInteger b = new BigInteger(in.next());
			out.println(a.multiply(b.divide(a.gcd(b))));
		}

		out.flush();
	}
}