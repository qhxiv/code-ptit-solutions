import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		int t = Integer.parseInt(in.nextLine());
		while (t-- > 0) {
			String[] s = in.nextLine().trim().split("\\s+");
			for (String x : s) {
				StringBuilder y = new StringBuilder(x);
				out.print(y.reverse() + " ");
			}
			out.println();
		}

		out.flush();
	}
}