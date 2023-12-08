import java.io.*;
import java.util.*;

class mh {
    String id, name;
    char type;

    public mh(String id, String name, char type) {
        this.id = id;
        this.name = name;
        this.type = type;
    }
}

class d {
    String id, name;
    long ex, im;

    d(mh o, long sln, long dgn, long slx) {
        id = o.id;
        name = o.name;
        double t = 0.08;
        if (o.type == 'B') t = 0.05;
        else if (o.type == 'C') t = 0.02;
        im = dgn * sln;
        ex = (long) (dgn * slx * (1 + t));
    }

    public String toString() {
        return String.format("%s %s %d %d", id, name, im, ex);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        HashMap<String, mh> mp = new HashMap<>();
        int n = in.nextInt();
        for (int i = 0; i < n; ++i) {
            String id = in.next();
            in.nextLine();
            mp.put(id, new mh(id, in.nextLine(), in.next().charAt(0)));
        }
        n = in.nextInt();
        while (n-- > 0) {
            String id = in.next();
            out.println(new d(mp.get(id), in.nextLong(), in.nextLong(), in.nextLong()));
        }
        out.close();
    }
}