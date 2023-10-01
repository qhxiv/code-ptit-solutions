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
		while (t-- > 0) {
			long n = in.nextLong();
			long a = 0, b = 1, c = 0;
			boolean check = false;
			while (c < n) {
				c = a + b;
				if (c == n) {
					check = true;
					break;
				}
				a = b; b = c;
			}
			if (n <= 1) check = true;
			if (check) out.println("YES");
			else out.println("NO");
		}
		
		out.flush();
	}
}