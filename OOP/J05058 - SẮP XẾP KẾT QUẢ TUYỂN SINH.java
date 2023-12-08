import java.io.*;
import java.util.*;

class ts {
    String id, name, status;
    double ut, dxt;

    public ts(String id, String name, double g1, double g2, double g3) {
        this.id = id;
        this.name = "";
        for (String x : name.trim().split("\\s+")) {
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        }
        if (id.charAt(2) == '1') ut = 0.5;
        else if (id.charAt(2) == '2') ut = 1;
        else ut = 2.5;
        dxt = g1*2 + g2 + g3 + ut;
        if (dxt < 24) status = "TRUOT";
        else status = "TRUNG TUYEN";
    }

    String rg(double d) {
        return (int)d == d ? String.valueOf((int)d) : String.valueOf(d);
    }

    public String toString() {
        return String.format("%s %s%s %s %s", id, name, rg(ut), rg(dxt), status);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<ts> list = new ArrayList<>();
        int T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            String id = in.next();
            in.nextLine();
            String name = in.nextLine();
            list.add(new ts(id, name, in.nextDouble(), in.nextDouble(), in.nextDouble()));
        }
        Collections.sort(list, new Comparator<ts>() {

            @Override
            public int compare(ts o1, ts o2) {
                return Double.compare(o2.dxt, o1.dxt);
            }

        });
        for (ts x : list) out.println(x);
        out.close();
    }
}