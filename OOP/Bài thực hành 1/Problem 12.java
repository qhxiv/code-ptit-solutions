import java.io.*;
import java.util.StringTokenizer;

class PhanSo {
	long tu, mau;
	
	PhanSo(long t, long m) {
		tu = t;
		mau = m;
	}
	
	void rutGon() {
		long tmp = Main.gcd(tu, mau);
		tu /= tmp;
		mau /= tmp;
	}
	
	PhanSo add(PhanSo a) {
		long l = Main.lcm(mau, a.mau);
		PhanSo p = new PhanSo(tu * (l / mau) + a.tu * (l / a.mau), l);
		p.rutGon();
		return p;
	}
	
	@Override
	public String toString() {
		return tu + "/" + mau;
	}
}

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
	
	public static long gcd(long a, long b) {
		if (b == 0) return a;
		return gcd(b, a % b);
	}
	
	public static long lcm(long a, long b) {
		return a * b / gcd(a, b);
	}
	
	public static void main(String[] args) {
		FastReader in = new FastReader();
		PrintWriter out = new PrintWriter(System.out);
		
		int t = 1;
		while (t-- > 0) {
			long a, b, c, d;
			a = in.nextLong();
			b = in.nextLong();
			c = in.nextLong();
			d = in.nextLong();
			out.print((new PhanSo(a, b)).add(new PhanSo(c, d)));
		}
		
		out.flush();
	}
}