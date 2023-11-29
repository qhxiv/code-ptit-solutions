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
    static int n = 15;
    static int[] a = new int[20];
    static boolean ok = true;
    static List<Long> list = new ArrayList<>();

    static long trans() {
        long res = 0;
        int m = 15;
        while (a[m] == 0) --m;
        long tmp = 1;
        for (int i = 1; i <= m; ++i) {
            res += a[i] * tmp;
            tmp *= 10;
        }
        return res;
    }

    static void output() {
        for (int i = n; i > 0; --i) out.print(a[i]);
        out.println();
    }

    static void generate() {
        int i = 1;
        while (i <= n && a[i] == 9) {
            a[i] = 0;
            ++i;
        }
        if (i > n) ok = false;
        else a[i] = 9;
    }

    public static void main(String[] subscribeToSecondThread) {
        a[1] = 9;
        while (ok) {
            list.add(trans());
            generate();
        }
        // for (long i = 1; i <= 100; ++i) {
        //     for (long x : list) {
        //         if (x % i == 0) {
        //             out.println(i + " " + x);
        //             break;
        //         }
        //     }
        // }
        int t = fs.nextInt();
        for (int i = 0; i < t; ++i) {
            int n = fs.nextInt();
            for (long x : list) {
                if (x % n == 0) {
                    out.println(x);
                    break;
                }
            }
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