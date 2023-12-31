import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Random;
import java.util.StringTokenizer;

class SoPhuc {
    int thuc, ao;
    
    SoPhuc(int a, int b) {
        thuc = a;
        ao = b;
    }

    SoPhuc cong(SoPhuc a) {
        return new SoPhuc(this.thuc + a.thuc, this.ao + a.ao);
    }

    SoPhuc nhan(SoPhuc a) {
        // (a + bi)(c + di) = (ac - bd) + (ad + bc)i
        return new SoPhuc(this.thuc*a.thuc - this.ao*a.ao, this.thuc*a.ao + this.ao*a.thuc);
    }

    public String toString() {
        return String.format("%d + %di", thuc, ao);
    }
}

public class Main {
    public static FastScanner fs = new FastScanner();
    public static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] subscribeToSecondThread) {
        int T = fs.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            SoPhuc a = new SoPhuc(fs.nextInt(), fs.nextInt());
            SoPhuc b = new SoPhuc(fs.nextInt(), fs.nextInt());
            out.println(a.cong(b).nhan(a) + ", " + a.cong(b).nhan(a.cong(b)));
            
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
