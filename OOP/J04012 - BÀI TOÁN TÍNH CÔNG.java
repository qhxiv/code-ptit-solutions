import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Random;
import java.util.Scanner;
import java.util.StringTokenizer;

class NhanVien {
    String mnv, ten;
    int luong, thuong, phuCap, thuNhap;

    NhanVien(String ten, int luong, int snc, String cv) {
        mnv = "NV01";
        this.ten = ten;
        luong *= snc;
        this.luong = luong;
        if (snc >= 25) this.thuong = luong / 5;
        else if (snc >= 22) this.thuong = luong / 10; 
        if (cv.equals("GD")) this.phuCap = 250000;
        else if (cv.equals("PGD")) this.phuCap = 200000;
        else if (cv.equals("TP")) this.phuCap = 180000;
        else this.phuCap = 150000;
        this.thuNhap = this.luong + this.phuCap + this.thuong;
    }

    @Override
    public String toString() {
        return String.format("%s %s %d %d %d %d", mnv, ten, luong, thuong, phuCap, thuNhap);
    }
}

public class Main {

    public static void main(String[] subscribeToSecondThread) {
        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        Scanner in = new Scanner(System.in);
        out.print(new NhanVien(in.nextLine(), in.nextInt(), in.nextInt(), in.next()));
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
