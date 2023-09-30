import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

class Good implements Comparable<Good> {
	static int cnt = 0;
	String ID, name, unit;
	int buyPrice, sellPrice, profit;

	Good(String name, String unit, int buyPrice, int sellPrice) {
		Good.cnt++;
		this.ID = "MH0";
		if (Good.cnt < 10)
			this.ID += "0" + Good.cnt;
		else this.ID += Good.cnt;
		this.name = name;
		this.unit = unit;
		this.buyPrice = buyPrice;
		this.sellPrice = sellPrice;
		this.profit = sellPrice - buyPrice;
	}

	@Override
	public String toString() {
		return this.ID + " " + this.name + " " + this.unit + " " + this.buyPrice + " " + this.sellPrice + " " + this.profit;
	}

	@Override
	public int compareTo(Good a) {
		if (this.profit == a.profit)
			return Integer.parseInt(this.ID.substring(3, 5)) - Integer.parseInt(a.ID.substring(3, 5));
		return -this.profit + a.profit;
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

	public static Reader in = new Reader();
	public static Scanner line = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args)
		throws IOException
	{
        int n = Integer.parseInt(line.nextLine());
		Good[] a = new Good[n];
		for (int i = 0; i < n; ++i) {
			a[i] = new Good(line.nextLine(), line.nextLine(), Integer.parseInt(line.nextLine()), Integer.parseInt(line.nextLine()));
		}
		Arrays.sort(a);
		for (Good x : a) {
			out.println(x);
		}

		out.flush();
	}
}