import java.io.File;
import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
		String s;
        try {
			in = new Scanner(new File("DATA.in"));
			s = in.nextLine();
			while (s.length() > 1) {
				int n = s.length();
				BigInteger a = new BigInteger(s.substring(0, n/2));
				BigInteger b = new BigInteger(s.substring(n/2));
				BigInteger c = a.add(b);
				out.println(c);
				s = c.toString();
			}
		} catch (Exception e) {
			// TODO: handle exception
		}

		out.close();
	}
}