import java.io.*;
import java.util.*;

class nv {
    String id, name, pb;
    long lt;

    nv(String id, String name, long lcb, long snc, String pb) {
        this.id = id;
        this.name = name;
        this.pb = pb;
        char type = id.charAt(0);
        int snct = Integer.parseInt(id.substring(1, 3));
        long hs;
        if (type == 'A') {
            if (snct >= 1 && snct <= 3) hs = 10;
            else if (snct >= 4 && snct <= 8) hs = 12;
            else if (snct >= 9 && snct <= 15) hs = 14;
            else hs = 20;
        } else if (type == 'B') {
            if (snct >= 1 && snct <= 3) hs = 10;
            else if (snct >= 4 && snct <= 8) hs = 11;
            else if (snct >= 9 && snct <= 15) hs = 13;
            else hs = 16;
        } else if (type == 'C') {
            if (snct >= 1 && snct <= 3) hs = 9;
            else if (snct >= 4 && snct <= 8) hs = 10;
            else if (snct >= 9 && snct <= 15) hs = 12;
            else hs = 14;
        } else {
            if (snct >= 1 && snct <= 3) hs = 8;
            else if (snct >= 4 && snct <= 8) hs = 9;
            else if (snct >= 9 && snct <= 15) hs = 11;
            else hs = 13;
        }
        lt = lcb * snc * hs;
    }

    public String toString() {
        return String.format("%s %s %d000", id, name, lt);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        HashMap<String, String> mp = new HashMap<>();
        int n = in.nextInt();
        for (int i = 0; i < n; ++i) {
            mp.put(in.next(), in.nextLine().trim());
        }
        List<nv> list = new ArrayList<>();
        n = in.nextInt();
        for (int i = 0; i < n; ++i) {
            String id = in.next();
            String mpb = id.substring(id.length() - 2);
            in.nextLine();
            list.add(new nv(id, in.nextLine(), in.nextLong(), in.nextLong(), mp.get(mpb)));
        }
        String pb = mp.get(in.next());
        out.printf("Bang luong phong %s:\n", pb);
        for (nv x : list)
            if (x.pb.equals(pb))
                out.println(x);
        out.close();
    }
}