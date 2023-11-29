import java.io.*;
import java.util.*;

class h {
    String id;
    long sln, slx, dg, tien, thue;

    h(String id, long sln) {
        this.id = id;
        this.sln = sln;
        char d = id.charAt(0);
        char c = id.charAt(id.length() - 1);
        if (d == 'A') slx = Math.round(sln*6.0/10);
        else if (d == 'B') slx = Math.round(sln*7.0/10);
        dg = 110000;
        if (c == 'N') dg = 135000;
        tien = slx*dg;
        double tmp = 0.08;
        if (d == 'A' && c == 'N') tmp = 0.11;
        else if (d == 'B' && c == 'Y') tmp = 0.17;
        else if (d == 'B' && c == 'N') tmp = 0.22;
        thue = (long)(tien*tmp);
    }

    public String toString() {
        return String.format("%s %d %d %d %d %d", id, sln, slx, dg, tien, thue);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            out.println(new h(in.next(), in.nextLong()));
        }
        out.close();
    }
}