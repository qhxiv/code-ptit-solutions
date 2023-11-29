import java.io.*;
import java.util.StringTokenizer;
import java.util.Scanner;

class Rectange {
	double width, height;
	String color;
	
	Rectange() {
		width = height = 1;
	}
	
	Rectange(double w, double h, String c) {
		width = w;
		height = h;
		color = c;
	}
	
	double getWidth() {
		return width;
	}
	
	void setWidth(double w) {
		width = w;
	}
	
	double getHeight() {
		return height;
	}
	
	void setHeight(double h) {
		height = h;
	}
	
	String getColor() {
		String f = color.substring(1, 2);
		if (color.length() > 2) {
			return f.toUpperCase() + color.substring(2).toLowerCase();
		}
		return f.toUpperCase();
	}
	
	void setColor(String c) {
		color = c;
	}
	
	double findArea() {
		return width * height;
	}
	
	double findPerimeter() {
		return (width + height) * 2;
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

	public static void main(String[] args) {
		FastReader in = new FastReader();
		Scanner sc = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		double a, b;
		a = in.nextDouble();
		b = in.nextDouble();
		String c = in.nextLine();
		if (a <= 0 || b <= 0 || Math.floor(a) != a || Math.floor(b) != b)
			out.print("INVALID");
		else {
			Rectange r = new Rectange(a, b, c);
			out.printf("%.0f %.0f %s", r.findPerimeter(), r.findArea(), r.getColor());
		}
		
		out.flush();
	}
}