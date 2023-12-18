import java.io.*;
import java.util.*;

class d {
    String id;
    double price;

    d(String id, double dg, long sl) {
        this.id = id;
        double th = dg * sl;
        double t = 0.29;
        double pvc = 0.04;
        if (id.charAt(0) == 'C') {
            t = 0.1;
            pvc = 0.03;
        } else if (id.charAt(0) == 'D') {
            t = 0.08;
            pvc = 0.025;
        } else if (id.charAt(0) == 'M') {
            t = 0.02;
            pvc = 0.005;
        }
        t *= th;
        pvc *= th;
        if (id.charAt(id.length() - 1) == 'C')
            t *= 0.95;
        price = (th + t + pvc) * 1.2 / sl;
    }

    public String toString() {
        return String.format("%s %.2f", id, price);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; ++i) {
            out.println(new d(in.next(), in.nextDouble(), in.nextLong()));
        }
        out.close();
    }
}