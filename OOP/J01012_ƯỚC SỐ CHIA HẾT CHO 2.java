import java.io.*;
import java.util.StringTokenizer;
import java.util.ArrayList;

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
			int n = in.nextInt();
			if (n == 2) {
				out.println(1);
				continue;
			}
			long c2 = 0;
			ArrayList<Long> a = new ArrayList<Long>();
			for (int i = 2; i <= (int)Math.sqrt(n); ++i) {
				if (n % i == 0) {
					long cnt = 0;
					while (n % i == 0) {
						cnt++;
						n /= i;
					}
					if (i == 2) c2 = cnt;
					else a.add(cnt);
				}
			}
			if (n != 1) c2 *= 2;
			for (long i : a) c2 *= i + 1;
			out.println(c2);
		}
		
		out.flush();
	}
}