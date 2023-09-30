import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
        try {
			Scanner in = new Scanner(new File("DATA.in"));
			long res = 0;
			while (in.hasNext()) {
				String s = solve(in.next());
				if (s != "a") {
					res += Integer.parseInt(s);
				}
			}
			out.print(res);
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		out.flush();
	}

	static String solve(String s) {
		try {
			Integer.parseInt(s);
		} catch (Exception e) {
			// TODO: handle exception
			s = "a";
		}
		return s;
	}
}