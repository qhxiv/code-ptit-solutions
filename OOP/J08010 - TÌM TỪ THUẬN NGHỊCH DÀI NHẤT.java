import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);

    static boolean check(String s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s.charAt(l) != s.charAt(r))
                return false;
            ++l;
            --r;
        }
        return true;
    }
    
    public static void main(String[] args) {
        HashMap<String, Integer> mp = new HashMap<>();
        List<String> list = new ArrayList<>();
        int l = -1;
        try {
            while (true) {
                for (String x : in.nextLine().trim().split("\\s+")) {
                    if (check(x)) {
                        l = Math.max(l, x.length());
                        if (mp.get(x) == null) {
                            list.add(x);
                            mp.put(x, 0);
                        }
                        mp.put(x, mp.get(x) + 1);
                    }
                }
            }
        } catch (Exception e) {
            // TODO: handle exception
        }
        for (String x : list) {
            if (x.length() == l) {
                out.printf("%s %d\n", x, mp.get(x));
            }
        }
        out.close();
    }
}