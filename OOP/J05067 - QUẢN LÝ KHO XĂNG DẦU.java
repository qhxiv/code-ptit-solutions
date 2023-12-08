import java.io.*;
import java.util.*;

class d {
    String id, brand;
    long unitPrice, tax, total;

    d(String id, long quantity) {
        this.id = id;
        if (id.substring(id.length() - 2).equals("BP")) brand = "British Petro";
        else if (id.substring(id.length() - 2).equals("ES")) brand = "Esso";
        else if (id.substring(id.length() - 2).equals("SH")) brand = "Shell";
        else if (id.substring(id.length() - 2).equals("CA")) brand = "Castrol";
        else if (id.substring(id.length() - 2).equals("MO")) brand = "Mobil";
        else brand = "Trong Nuoc";
        double t;
        if (id.charAt(0) == 'X') {
            unitPrice = 128000;
            t = 0.03;
        } else if (id.charAt(0) == 'D') {
            unitPrice = 11200;
            t = 0.035;
        } else {
            unitPrice = 9700;
            t = 0.02;
        }
        if (brand.equals("Trong Nuoc")) t = 0;
        long tmp = unitPrice * quantity;
        tax = (long) (tmp * t);
        total = tmp + tax;
    }

    public String toString() {
        return String.format("%s %s %d %d %d", id, brand, unitPrice, tax, total);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            out.println(new d(in.next(), in.nextLong()));
        }
        out.close();
    }
}