import java.io.*;
import java.util.*;

class NV {
    static int num = 0;
    
    String ten, ma;
    long pc, lc, tu, cl;

    NV(String name, String cv, long lcb, long snc) {
        ++num;
        ma = String.format("NV%02d", num);
        ten = name;
        pc = 100;
        if (cv.equals("GD")) pc = 500;
        else if (cv.equals("PGD")) pc = 400;
        else if (cv.equals("TP")) pc = 300;
        else if (cv.equals("KT")) pc = 250;
        lc = lcb * snc;
        tu = 25000;
        if ((pc + lc) * 2 / 3 < 25000)
            tu = Math.round((double)((pc + lc) * 2 / 3) / 1000) * 1000;
        cl = lc - tu + pc;
    }

    public String toString() {
        return String.format("%s %s %d %d %d %d", ma, ten, pc, lc, tu, cl);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            out.println(new NV(in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine()), Long.parseLong(in.nextLine())));
        }
        out.close();
    }
}