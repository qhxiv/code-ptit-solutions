import java.io.*;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
		int T = Integer.parseInt(in.nextLine());
		for (int tt = 0; tt < T; ++tt) {
			String s = in.nextLine();
			String[] list = s.split(" ");
			int n = list.length, even, odd;
			even = odd = 0;
			for (String x : list) {
				int tmp = Integer.parseInt(x);
				if (tmp % 2 == 0) ++even;
				else ++odd;
			}
			if ((n % 2 == 0 && even > odd) || (n % 2 == 1 && even < odd))
				out.println("YES");
			else out.println("NO");
		}
		out.close();
	}
}