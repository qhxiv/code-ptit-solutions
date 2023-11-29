package javaapplication1;

import java.io.*;
import java.util.*;

class ThiSinh {
    static int id = 0;
    
    int ma;
    String ten, ns;
    double diem;
    
    ThiSinh(String name, String dob, double g1, double g2, double g3) {
        ++id;
        ma = id;
        ten = name;
        ns = dob;
        diem = g1 + g2 + g3;
    }
    
    public String toString() {
        return String.format("%d %s %s %s", ma, ten, ns, Double.toString(diem));
    }
}

public class JavaApplication1 {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<ThiSinh> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new ThiSinh(in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine())));
        }
        double m= -1;
        for (ThiSinh x : list) {
            m = Math.max(m, x.diem);
        }
        for (ThiSinh x : list)
            if (x.diem == m)
                out.println(x);
        out.close();
    }
}