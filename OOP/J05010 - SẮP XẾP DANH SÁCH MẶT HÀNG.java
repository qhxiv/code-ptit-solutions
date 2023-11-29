package javaapplication1;

import java.io.*;
import java.util.*;

class MatHang {
    static int id = 0;
    
    int ma;
    String ten, nhom;
    double ln;
    
    MatHang(String name, String type, double buy, double sell) {
        ++id;
        ma = id;
        ten = name;
        nhom = type;
        ln = sell - buy;
    }
    
    public String toString() {
        return String.format("%d %s %s %.2f", ma, ten, nhom, ln);
    }
}

public class JavaApplication1 {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<MatHang> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new MatHang(in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine())));
        }
        Collections.sort(list, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                return Double.compare(o2.ln, o1.ln);
            }
            
        });
        for (MatHang x : list) {
            out.println(x);
        }
        out.close();
    }
}