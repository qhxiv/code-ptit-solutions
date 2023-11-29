import java.io.*;
import java.security.spec.MGF1ParameterSpec;
import java.util.*;

class mh {
    static HashMap<String, Integer> mp = new HashMap<>();

    String id, name;
    long tck, tt;

    mh(String name, long sl, long dg) {
        String[] a = name.split("\\s+");
        id = "";
        for (int i = 0; i < 2; ++i)
            id += a[i].substring(0, 1).toUpperCase();
        mp.put(id, mp.get(id) == null ? 1 : mp.get(id) + 1);
        id += "0" + mp.get(id);
        this.name = name;
        double pck;
        if (sl < 5) pck = 0;
        else if (sl < 8) pck = 0.01;
        else if (sl <= 10) pck = 0.02;
        else pck = 0.05;
        tt = sl*dg;
        tck = (long) (tt*pck);
        tt -= tck;
    }

    public String toString() {
        return String.format("%s %s %d %d", id, name, tck, tt);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = in.nextInt();
        List<mh> list = new ArrayList<>();
        for (int tt = 0; tt < T; ++tt) {
            in.nextLine();
            list.add(new mh(in.nextLine(), in.nextLong(), in.nextLong()));
        }
        Collections.sort(list, new Comparator<mh>(){

            @Override
            public int compare(mh o1, mh o2) {
                return Long.compare(o2.tck, o1.tck);
            }

        });
        for (mh x : list) out.println(x);
        out.close();
    }
}