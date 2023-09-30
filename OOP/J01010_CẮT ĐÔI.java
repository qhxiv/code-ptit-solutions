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
	
	static char cut(char x) {
		if (x == '0' || x == '1')
			return x;
		else if (x == '9' || x == '8')
			return '0';
		return '.';
	}
	
	static String solve(String s) {
		if (s.charAt(0) == '0') {
			boolean check = true;
			int i = 1;
			while (i < s.length()) {
				if (s.charAt(i) != '0') {
					check = false;
					break;
				}
				i++;
			}
			if (check) return "INVALID";
			else return s.substring(i);
		}
		return s;
	}
	
	public static void main(String[] args) {
		FastReader in = new FastReader();
		PrintWriter out = new PrintWriter(System.out);
		
		int t = in.nextInt();
		while (t-- > 0) {
			String s = in.nextLine();
			String res = "";
			boolean check = false;
			for (int i = 0; i < s.length(); ++i) {
				char x = cut(s.charAt(i));
				if (x == '.') {
					check = true;
					break;
				}
				res += x;
			}
			if (check) {
				res = "INVALID";
			} else res = solve(res);
			out.println(res);
		}
		
		out.flush();
	}
}