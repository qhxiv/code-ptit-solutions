import java.io.*;
import java.util.*;

class nv {
    String id, name, cv;
    long pccv, lc, tu, cl, tn;

    nv(int i, String name, String cv, long lcb, long nc) {
        this.cv = cv;
        id = String.format("NV%02d", i);
        this.name = name;
        lc = lcb * nc;
        pccv = 100;
        if (cv.equals("GD")) pccv = 500;
        else if (cv.equals("PGD")) pccv = 400;
        else if (cv.equals("TP")) pccv = 300;
        else if (cv.equals("KT")) pccv = 250;
        tu = 25000;
        if ((pccv + lc)*2.0/3 < 25000)
            tu = Math.round((pccv + lc)*2.0/3/1000)*1000;
        cl = lc + pccv - tu;
        tn = lc + pccv;
    }

    public String toString() {
        return String.format("%s %s %d %d %d %d", id, name, pccv, lc, tu, cl);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = in.nextInt();
        List<nv> list = new ArrayList<>();
        for (int tt = 0; tt < T; ++tt) {
            in.nextLine();
            list.add(new nv(tt + 1, in.nextLine(), in.nextLine(), in.nextLong(), in.nextLong()));
        }
        Collections.sort(list, new Comparator<nv>(){

            @Override
            public int compare(nv o1, nv o2) {
                return Long.compare(o2.tn, o1.tn);
            }

        });
        for (nv x : list) {
            out.println(x);
        }
        out.close();
    }
}