import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Random;
import java.util.StringTokenizer;

class PhanSo {
    long tu, mau;

    PhanSo(long a, long b) {
        tu = a;
        mau = b;
    }
    
    void rutGon() {
        long g = Main.gcd(tu, mau);
        tu /= g;
        mau /= g;
    }

    public PhanSo clone() {
        return new PhanSo(tu, mau);
    }

    PhanSo cong(PhanSo a) {
        long m = Main.lcm(this.mau, a.mau);
        PhanSo res = new PhanSo((m / this.mau) * this.tu + (m / a.mau) * a.tu, m);
        res.rutGon();
        return res;
    }

    PhanSo nhan(PhanSo a) {
        PhanSo res = new PhanSo(this.tu * a.tu, this.mau * a.mau);
        res.rutGon();
        return res;
    }

    public String toString() {
        return String.format("%d/%d", tu, mau);
    }
}

public class Main {
    public static FastScanner fs = new FastScanner();
    public static PrintWriter out = new PrintWriter(System.out);

    public static long gcd(long a, long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public static long lcm(long a, long b) {
        return a / gcd(a, b) * b;
    }

    public static void main(String[] subscribeToSecondThread) {
        int T = fs.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            PhanSo a = new PhanSo(fs.nextLong(), fs.nextLong());
            PhanSo b = new PhanSo(fs.nextLong(), fs.nextLong());
            PhanSo c = a.cong(b);
            c = c.nhan(c);
            PhanSo d = a.nhan(b.nhan(c));
            out.println(c + " " + d);
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
