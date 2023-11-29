import java.io.*;
import java.util.*;

class d {
    String name, id, stt;
    long discount, total;

    d(String name, String id, long uPrice, long quantity) {
        this.name = name;
        this.id = id;
        stt = id.substring(1, 4);
        char x = id.charAt(4);
        long tmp = uPrice*quantity;
        double t = 0.5;
        if (x == '2') t = 0.3;
        discount = (long)(t * tmp);
        total = tmp - discount;
    }

    public String toString() {
        return String.format("%s %s %s %d %d", name, id, stt, discount, total);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            in.nextLine();
            out.println(new d(in.nextLine(), in.next(), in.nextLong(), in.nextLong()));
        }
        out.close();
    }
}