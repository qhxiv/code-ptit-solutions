import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Random;
import java.util.StringTokenizer;

public class Main {
	static int search(int[] a, int l, int r, int x) {
		int res = -1;
		while (l <= r) {
			int m = (l + r) / 2;
			if (a[m] < x) {
				res = m;
				l = m + 1;
			} else r = m - 1;
		}
		return res;
	}

	public static void main(String[] subscribeToSecondThread) {
		FastScanner fs = new FastScanner();
		PrintWriter out = new PrintWriter(System.out);
		int T = fs.nextInt();
		for (int tt = 0; tt < T; ++tt) {
			int n = fs.nextInt();
			int k = fs.nextInt();
			int[] a = fs.readArray(n);
			
			ruffleSort(a);
			long cnt = 0;
			for (int i = 0; i < n - 1; ++i) {
				int t = search(a, i + 1, n - 1, a[i] + k);
				if (t != -1) cnt += t - i;
			}
			out.println(cnt);
		}
		out.close();
	}

	static final Random random = new Random();

	static void ruffleSort(int[] a) {
		int n = a.length;// shuffle, then sort
		for (int i = 0; i < n; i++) {
			int oi = random.nextInt(n), temp = a[oi];
			a[oi] = a[i];
			a[i] = temp;
		}
		Arrays.sort(a);
	}

	static void sort(int[] a) {
		ArrayList<Integer> l = new ArrayList<>();
		for (int i : a)
			l.add(i);
		Collections.sort(l);
		for (int i = 0; i < a.length; i++)
			a[i] = l.get(i);
	}

	static class FastScanner {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer("");

		String next() {
			while (!st.hasMoreTokens())
				try {
					st = new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			return st.nextToken();
		}

		int nextInt() {
			return Integer.parseInt(next());
		}

		int[] readArray(int n) {
			int[] a = new int[n];
			for (int i = 0; i < n; i++)
				a[i] = nextInt();
			return a;
		}

		long nextLong() {
			return Long.parseLong(next());
		}
	}

}