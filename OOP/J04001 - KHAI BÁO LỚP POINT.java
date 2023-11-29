import java.io.*;
import java.util.StringTokenizer;

class Point {
	double x, y;
	
	Point(){}
	
	Point(double x, double y) {
		this.x = x;
		this.y = y;
	}
	
	Point(Point a) {
		this.x = a.x;
		this.y = a.y;
	}
	
	double getX() {
		return this.x;
	}
	
	double getY() {
		return this.y;
	}
	
	double distance(Point a) {
		return Math.sqrt(Math.pow(this.x - a.x, 2) + Math.pow(this.y - a.y, 2));
	}
	
	double distance(Point a, Point b) {
		return Math.sqrt(Math.pow(b.x - a.x, 2) + Math.pow(b.y - a.y, 2));
	}
	
	public String toString() {
		return this.x + " " + this.y;
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

		double nextDouble()
		{
			return Double.parseDouble(next());
		}
		
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
		while (t > 0) {
			t--;
			double a, b, c, d;
			a = in.nextDouble();
			b = in.nextDouble();
			c = in.nextDouble();
			d = in.nextDouble();
			Point A = new Point(a, b);
			Point B = new Point(c, d);
			out.printf("%.4f\n", A.distance(B));
		}
		
		out.flush();
	}
}