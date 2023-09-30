import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);

	static int n, k;
	static int[] x = new int[20];

	static void output(int[] a) {
		for (int i = 1; i <= k; ++i) {
			out.print(a[x[i] - 1] + " ");
		}
		out.println();
	}

	static void Try(int i, int[] a) {
		for (int j = x[i - 1] + 1; j <= n; ++j) {
			x[i] = j;
			if (i == k)
				output(a);
			else Try(i + 1, a);
		}
	}

	public static void main(String[] args) {
        int t = Integer.parseInt(in.nextLine());
		while (t-- > 0) {
			n = in.nextInt();
			k = in.nextInt();
			int[] a = new int[n];
			for (int i = 0; i < n; ++i) {
				a[i] = in.nextInt();
			}
			Arrays.sort(a);
			Try(1, a);
		}

		out.flush();
	}
}