import java.io.*;
import java.util.*;

class d {
    int a, b;

    public d(int a, int b) {
        this.a = a;
        this.b = b;
    }
    
    public String toString() {
        return String.format("%d %d", a, b);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);

    static boolean check(int x) {
        String s = Integer.toString(x);
        for (int i = 0; i < s.length() - 1; ++i) {
            if (s.charAt(i) > s.charAt(i + 1))
                return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        HashMap<Integer, Integer> tt = new HashMap<>();
        try {
            int cnt = 0;
            while (true) {
                ++cnt;
                int x = in.nextInt();
                if (check(x)) {
                    if (mp.get(x) == null) {
                        mp.put(x, 0);
                        tt.put(x, cnt);
                    }
                    mp.put(x, mp.get(x) + 1);
                }
            }
        } catch (Exception e) {
            // TODO: handle exception
        }
        List<d> list = new ArrayList<>();
        for (int x : mp.keySet()) {
            list.add(new d(x, mp.get(x)));
        }
        Collections.sort(list, new Comparator<d>() {
            @Override
            public int compare(d o1, d o2) {
                if (o1.b == o2.b)
                    return Integer.compare(tt.get(o1.a), tt.get(o2.a));
                return Integer.compare(o2.b, o1.b);
            }
        });
        for (d x : list) out.println(x);
        out.close();
    }
}