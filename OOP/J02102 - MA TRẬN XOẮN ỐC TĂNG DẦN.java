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

	public static void main(String[] subscribeToSecondThread) {
		FastScanner fs = new FastScanner();
		PrintWriter out = new PrintWriter(System.out);
		int n = fs.nextInt();
		int[] a = fs.readArray(n * n);
		int[][] b = new int[n][n];
		int c1, c2, r1, r2;
		
		c1 = r1 = 0;
		c2 = r2 = n - 1;
		ruffleSort(a);
		int j = 0;
		while (c1 <= c2 && r1 <= r2) {
			for (int i = c1; i <= c2; ++i) {
				b[r1][i] = a[j++];
			}
			++r1;
			for (int i = r1; i <= r2; ++i) {
				b[i][c2] = a[j++];
			}
			--c2;
			for (int i = c2; i >= c1; --i) {
				b[r2][i] = a[j++];
			}
			--r2;
			for (int i = r2; i >= r1; --i) {
				b[i][c1] = a[j++];
			}
			++c1;
		}

		for (int i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				out.print(b[i][j] + " ");
			}
			out.println();
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
