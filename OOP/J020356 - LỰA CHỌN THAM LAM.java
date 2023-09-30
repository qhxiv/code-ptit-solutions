import java.io.*;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
		int n = in.nextInt();
		int s = in.nextInt();
		if ((s == 0 && n != 1) || s > 9*n) {
			out.print("-1 -1");
		} else if (s == 0 && n == 1) {
			out.print("0, 0");
		} else {
			int[] mi = new int[n];
			int[] ma = new int[n];

			int z = s - 1, i = n - 1;
			mi[0] = 1;
			while (z > 0) {
				mi[i] += Math.min(z, 9);
				z -= Math.min(z, 9);
				--i;
			}

			i = 0;
			while (s > 0) {
				ma[i] += Math.min(s, 9);
				s -= Math.min(s, 9);
				++i;
			}

			for (int j = 0; j < n; ++j) {
				out.print(mi[j]);
			}
			out.print(" ");
			for (int j = 0; j < n; ++j) {
				out.print(ma[j]);
			}
		}
		out.close();
	}
}