import java.io.*;
import java.util.Scanner;

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
	
	static int n, s;

	static String solve() {
		if (s == 0) {
			if (n == 1) return "0 0";
			else return "-1 -1";
		}
		if (9 * n < s) return "-1 -1";
		char[] mn = new char[n];
		char[] mx = new char[n];
		for (int i = 0; i < n; ++i) {
			mn[i] = '0';
			mx[i] = '0';
		}

		int m = s, i = 0;
		while (m > 0) {
			if (m >= 9) {
				mx[i] = '9';
				m -= 9;
			} else {
				mx[i] = (char)('0' + m);
				m = 0;
			}
			++i;
		}

		mn[0] = '1';
		m = s - 1;
		i = n - 1;
		while (m > 0) {
			if (m >= 9) {
				mn[i] = (char)(mn[i] + 9);
				m -= 9;
			} else {
				mn[i] = (char)(mn[i] + m);
				m = 0;
			}
			--i;
		}

		return new String(mn) + " " + new String(mx);
	}

	public static void main(String[] args)
		throws IOException
	{
        n = in.nextInt();
		s = in.nextInt();
		out.print(solve());

		out.flush();
	}
}