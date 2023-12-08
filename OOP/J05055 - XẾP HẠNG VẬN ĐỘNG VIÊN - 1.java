import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class vdv {
    static SimpleDateFormat f = new SimpleDateFormat("HH:mm:ss");

    String id, name;
    long tttt, ut, ttdxh;
    int xh;
    
    vdv(int i, String name, String ns, String s, String e) throws ParseException {
        id = String.format("VDV%02d", i);
        this.name = name;
        int age = 2021 - Integer.parseInt(ns.substring(ns.length() - 4));
        long st = Main.stringToSec(s);
        long en = Main.stringToSec(e);
        tttt = en - st;
        if (age < 18) ut = 0;
        else if (age < 25) ut = 1;
        else if (age < 32) ut = 2;
        else ut = 3;
        ttdxh = tttt - ut;
    }

    public String toString() {
        return String.format("%s %s %s %s %s %d", id, name, Main.secToString(tttt), Main.secToString(ut), Main.secToString(ttdxh), xh);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    static SimpleDateFormat f = new SimpleDateFormat("HH:mm:ss");

    static long stringToSec(String x) {
        long h = Long.parseLong(x.substring(0, 2));
        long m = Long.parseLong(x.substring(3, 5));
        long s = Long.parseLong(x.substring(6));
        return h*3600 + m*60 + s;
    }

    static String secToString(long s) {
        long h = (long) (s / 3600);
        s -= h*3600;
        long m = (long) (s / 60);
        s -= m*60;
        return String.format("%02d:%02d:%02d", h, m, s);
    }
    
    public static void main(String[] args) throws ParseException {
        List<vdv> list = new ArrayList<>();
        TreeSet<Long> se = new TreeSet<>();
        int n = in.nextInt();
        for (int i = 0; i < n; ++i) {
            in.nextLine();
            vdv x = new vdv(i + 1, in.nextLine(), in.next(), in.next(), in.next());
            list.add(x);
            se.add(x.ttdxh);
        }
        int xh = 1;
        for (long y : se) {
            int cnt = 0;
            for (vdv x : list) {
                if (x.ttdxh == y) {
                    x.xh = xh;
                    ++cnt;
                }
            }
            xh += cnt;
        }
        for (vdv x : list) out.println(x);
        out.close();
    }
}