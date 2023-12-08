import java.io.*;
import java.util.*;

class hs {
    String id, name, className, gc;
    int dcc;
    
    public hs(String id, String name, String className) {
        this.id = id;
        this.name = name;
        this.className = className;
        gc = "";
    }

    public String toString() {
        return String.format("%s %s %s %d %s", id, name, className, dcc, gc);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<String> list = new ArrayList<>();
        HashMap<String, hs> mp = new HashMap<>();
        int n = in.nextInt();
        for (int tt = 0; tt < n; ++tt) {
            String id = in.next();
            in.nextLine();
            String name = in.nextLine();
            String className = in.next();
            hs x = new hs(id, name, className);
            list.add(id);
            mp.put(id, x);
        }
        for (int i = 0; i < n; ++i) {
            String id = in.next();
            String s = in.next();
            int dcc = 10;
            for (int j = 0; j < s.length(); ++j) {
                if (s.charAt(j) == 'm') --dcc;
                else if (s.charAt(j) == 'v') dcc -= 2;
            }
            if (dcc < 0) dcc = 0;
            hs x = mp.get(id);
            x.dcc = dcc;
            if (dcc == 0) x.gc = "KDDK";
        }
        for (String x : list) out.println(mp.get(x));
        out.close();
    }
}