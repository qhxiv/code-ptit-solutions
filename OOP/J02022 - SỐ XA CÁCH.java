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
	
	static int[] a = new int[10];
	static boolean[] used = new boolean[10];
	static int n;

	static boolean check() {
		for (int i = 2; i <= n; ++i) {
			if (Math.abs(a[i] - a[i - 1]) == 1)
				return false;
		}
		return true;
	}

	static void output() {
		for (int i = 1; i <= n; ++i) {
			out.print(a[i]);
		}
		out.println();
	}

	static void Try(int i) {
		for (int j = 1; j <= n; ++j) {
			if (!used[j]) {
				a[i] = j;
				used[j] = true;
				if (i == n && check()) output();
				else Try(i + 1);
				used[j] = false;
			}
		}
	}

	public static void main(String[] args)
		throws IOException
	{
        int t = in.nextInt();
		while (t-- > 0) {
			n = in.nextInt();
			for (int i = 1; i <= n; ++i) {
				used[i] = false;
			}
			Try(1);
			out.println();
		}

		out.flush();
	}
}