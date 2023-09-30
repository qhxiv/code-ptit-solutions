import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
		BigInteger a = new BigInteger(in.next());
		BigInteger b = new BigInteger(in.next());
		out.print(a.add(b));
		out.close();
	}
}