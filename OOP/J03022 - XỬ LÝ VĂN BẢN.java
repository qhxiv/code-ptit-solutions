import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Random;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] subscribeToSecondThread) {
        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        HashSet<Character> se = new HashSet<>();
        se.add('.');
        se.add('?');
        se.add('!');
        boolean f = true;
        try {
            while (true) {
                String s = fs.next();
                String x = " ";
                if (se.contains(s.charAt(s.length() - 1))) {
                    x = "\n";
                    s = s.substring(0, s.length() - 1);
                }
                if (f) {
                    s =  s.substring(0, 1).toUpperCase()
                       + s.substring(1).toLowerCase();
                } else {
                    s = s.toLowerCase();
                }
                out.print(s + x);
                f = x.equals("\n");
            }
        } catch (Exception e) {
            // TODO: handle exception
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
