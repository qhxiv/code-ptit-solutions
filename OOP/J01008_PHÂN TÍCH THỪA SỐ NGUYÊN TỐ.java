import java.io.*;
import java.util.StringTokenizer;

public class Main {
	static class FastReader {
		BufferedReader br;
		StringTokenizer st;

		public FastReader()
		{
			br = new BufferedReader(
				new InputStreamReader(System.in));
		}

		String next()
		{
			while (st == null || !st.hasMoreElements()) {
				try {
					st = new StringTokenizer(br.readLine());
				}
				catch (IOException e) {
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}

		int nextInt() { return Integer.parseInt(next()); }

		long nextLong() { return Long.parseLong(next()); }

		double nextDouble() { return Double.parseDouble(next()); }
		
		float nextFloat() { return Float.parseFloat(next()); }

		String nextLine()
		{
			String str = "";
			try {
				if(st.hasMoreTokens()){
					str = st.nextToken("\n");
				}
				else{
					str = br.readLine();
				}
			}
			catch (IOException e) {
				e.printStackTrace();
			}
			return str;
		}
	}

	public static void main(String[] args) {
		FastReader in = new FastReader();
		PrintWriter out = new PrintWriter(System.out);
		
		int t = in.nextInt();
		for (int i = 1; i <= t; ++i) {
			out.print("Test " + i + ": ");
			int n = in.nextInt();
			for (int j = 2; j <= n / 2; ++j) {
				if (n % j == 0) {
					int cnt = 0;
					while (n % j == 0) {
						cnt++;
						n /= j;
					}
					out.printf("%d(%d) ", j, cnt);
				}
			}
			if (n != 1) out.printf("%d(1)", n);
			out.println();
		}
		
		out.flush();
	}
}