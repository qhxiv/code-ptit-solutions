import java.io.*;
import java.util.Scanner;

class Point {
	double x, y;

	Point() {}

	Point(double a, double b) {
		x = a;
		y = b;
	}

	Point(Point a) {
		this.x = a.x;
		this.y = a.y;
	}

	double getX() {
		return x;
	}

	double getY() {
		return y;
	}

	double distance(Point a) {
		return Math.sqrt(Math.pow(Math.abs(this.x - a.x), 2) + Math.pow(Math.abs(this.y - a.y), 2));
	}

	static double distance(Point a, Point b) {
		return a.distance(b);
	}

	public String toString() {
		return x + " " + y;
	}
}

public class Main {
	static class Reader {
		final private int BUFFER_SIZE = 1 << 16;
		private DataInputStream din;
		private byte[] buffer;
		private int bufferPointer, bytesRead;

		public Reader()
		{
			din = new DataInputStream(System.in);
			buffer = new byte[BUFFER_SIZE];
			bufferPointer = bytesRead = 0;
		}

		public Reader(String file_name) throws IOException
		{
			din = new DataInputStream(
				new FileInputStream(file_name));
			buffer = new byte[BUFFER_SIZE];
			bufferPointer = bytesRead = 0;
		}

		public String readLine() throws IOException
		{
			byte[] buf = new byte[64];
			int cnt = 0, c;
			while ((c = read()) != -1) {
				if (c == '\n') {
					if (cnt != 0) {
						break;
					}
					else {
						continue;
					}
				}
				buf[cnt++] = (byte)c;
			}
			return new String(buf, 0, cnt);
		}

		public int nextInt() throws IOException
		{
			int ret = 0;
			byte c = read();
			while (c <= ' ') {
				c = read();
			}
			boolean neg = (c == '-');
			if (neg)
				c = read();
			do {
				ret = ret * 10 + c - '0';
			} while ((c = read()) >= '0' && c <= '9');

			if (neg)
				return -ret;
			return ret;
		}

		public long nextLong() throws IOException
		{
			long ret = 0;
			byte c = read();
			while (c <= ' ')
				c = read();
			boolean neg = (c == '-');
			if (neg)
				c = read();
			do {
				ret = ret * 10 + c - '0';
			} while ((c = read()) >= '0' && c <= '9');
			if (neg)
				return -ret;
			return ret;
		}

		public double nextDouble() throws IOException
		{
			double ret = 0, div = 1;
			byte c = read();
			while (c <= ' ')
				c = read();
			boolean neg = (c == '-');
			if (neg)
				c = read();

			do {
				ret = ret * 10 + c - '0';
			} while ((c = read()) >= '0' && c <= '9');

			if (c == '.') {
				while ((c = read()) >= '0' && c <= '9') {
					ret += (c - '0') / (div *= 10);
				}
			}

			if (neg)
				return -ret;
			return ret;
		}

		private void fillBuffer() throws IOException
		{
			bytesRead = din.read(buffer, bufferPointer = 0,
								BUFFER_SIZE);
			if (bytesRead == -1)
				buffer[0] = -1;
		}

		private byte read() throws IOException
		{
			if (bufferPointer == bytesRead)
				fillBuffer();
			return buffer[bufferPointer++];
		}

		public void close() throws IOException
		{
			if (din == null)
				return;
			din.close();
		}
	}

	static boolean canMakeATriangle(double a, double b, double c) {
		return (a + b > c && a + c > b && b + c > a);
	}

	static double solve(double a, double b, double c) {
		double p = (a + b + c) / 2;
		double s = Math.sqrt(p * (p - a) * (p - b) * (p - c));
		double r = a * b * c / 4 / s;
		return r * r * Math.PI;
	}

	public static void main(String[] args)
		throws IOException
	{
		Reader in = new Reader();
		Scanner line = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        
		int t = in.nextInt();
        while (t-- > 0) {
			Point p1 = new Point(in.nextDouble(), in.nextDouble());
			Point p2 = new Point(in.nextDouble(), in.nextDouble());
			Point p3 = new Point(in.nextDouble(), in.nextDouble());
	
			double a = Point.distance(p1, p2);
			double b = Point.distance(p1, p3);
			double c = Point.distance(p3, p2);
	
			if (canMakeATriangle(a, b, c))
				out.printf("%.3f\n", solve(a, b, c));
			else out.print("INVALID\n");
	
        }

		out.flush();
	}
}
