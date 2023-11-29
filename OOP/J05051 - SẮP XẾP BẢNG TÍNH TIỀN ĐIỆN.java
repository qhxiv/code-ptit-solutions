import java.io.*;
import java.util.*;

class kh {
    String id;
    long hs, tt, pt, ttpt;

    kh(int i, String sd, long cu, long moi) {
        id = String.format("KH%02d", i);
        hs = 3;
        if (sd.equals("NN")) hs = 5;
        else if (sd.equals("TT")) hs = 4;
        else if (sd.equals("CN")) hs = 2;
        tt = (moi - cu)*hs * 550;
        double tmp = 0;
        if (moi - cu < 50) {}
        else if (moi - cu <= 100) tmp = 0.35;
        else tmp = 1;
        pt = (long)Math.ceil(tmp * tt);
        ttpt = pt + tt;
    }

    public String toString() {
        return String.format("%s %d %d %d %d", id, hs, tt, pt, ttpt);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = in.nextInt();
        List<kh> list = new ArrayList<>();
        for (int tt = 0; tt < T; ++tt) {
            list.add(new kh(tt + 1, in.next(), in.nextLong(), in.nextLong()));
        }
        Collections.sort(list, new Comparator<kh>(){

            @Override
            public int compare(kh o1, kh o2) {
                return Long.compare(o2.ttpt, o1.ttpt);
            }

        });
        for (kh x : list) out.println(x);
        out.close();
    }
}