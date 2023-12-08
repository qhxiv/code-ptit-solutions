import java.io.*;
import java.util.*;

class gv {
    String id, name;
    long bl, pc, tn;

    gv(String id, String name, long lcb) {
        this.id = id;
        this.name = name;
        bl = Integer.parseInt(id.substring(id.length() - 2));
        if (id.substring(0, 2).equals("HT")) pc = 2000000;
        else if (id.substring(0, 2).equals("GV")) pc = 500000;
        else pc = 900000;
        tn = lcb*bl + pc;
    }

    public String toString() {
        return String.format("%s %s %d %d %d", id, name, bl, pc, tn);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        boolean f = false;
        int hp = 0;
        int T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            String id = in.next();
            in.nextLine();
            String name = in.nextLine();
            long lcb = in.nextLong();
            if (id.substring(0, 2).equals("HT"))
                if (f) continue;
                else f = true;
            else if (id.substring(0, 2).equals("HP"))
                if (hp < 2) ++hp;
                else continue;
            out.println(new gv(id, name, lcb));
        }
        out.close();
    }
}