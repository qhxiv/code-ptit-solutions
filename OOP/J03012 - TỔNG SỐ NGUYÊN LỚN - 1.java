import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
		int T = Integer.parseInt(in.next());
		for (int tt = 0; tt < T; ++tt) {
			BigInteger x = new BigInteger(in.next());
			BigInteger y = new BigInteger(in.next());
			out.println(x.add(y));
		}
		out.close();
	}
}