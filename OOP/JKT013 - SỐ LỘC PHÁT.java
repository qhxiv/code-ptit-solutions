import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Random;
import java.util.StringTokenizer;

public class Main {
    public static FastScanner fs = new FastScanner();
    public static PrintWriter out = new PrintWriter(System.out);
    static boolean ok;
    static int[] a = new int[20];
    static List<int[]> list = new ArrayList<>();

    static void generate(int n) {
        int i = n;
        while (i > 0 && a[i] == 6) {
            a[i] = 8;
            --i;
        }
        if (i == 0) ok = false;
        else a[i] = 6;
    }

    static void solve(int n) {
        ok = true;
        for (int i = 1; i <= n; ++i) a[i] = 8;
        while (ok) {
            a[0] = n;
            list.add(a.clone());
            generate(n);
        }
    }

    public static void main(String[] subscribeToSecondThread) {
        int T = fs.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            list.clear();
            int n = fs.nextInt();
            for (int i = n; i >= 1; --i)
                solve(i);
            out.println(list.size());
            for (int[] x : list) {
                for (int i = 1; i <= x[0]; ++i)
                    out.print(x[i]);
                out.print(" ");
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
