import java.io.*;
import java.util.*;

class LichGD {
    static Integer num = 0;
    
    String mn, mm, gv, ph;
    int thu, kip;

    LichGD(String a, int b, int c, String d, String e) {
        mm = a;
        thu = b;
        kip = c;
        gv = d;
        ph = e;
        ++num;
        mn = "HP";
        if (num < 100) mn += "0";
        if (num < 10) mn += "0";
        mn += num.toString();
    }

    public String toString() {
        return String.format("%s %d %d %s %s", mn, thu, kip, gv, ph);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("MONHOC.in"));
        int n = Integer.parseInt(in.nextLine());
        HashMap<String, String> subjects = new HashMap<>();
        while (n-- > 0) {
            subjects.put(in.nextLine(), in.nextLine());
            in.nextLine();
        }

        in = new Scanner(new File("LICHGD.in"));
        n = Integer.parseInt(in.nextLine());
        List<LichGD> list = new ArrayList<>();
        while (n-- > 0) {
            list.add(new LichGD(in.nextLine(), Integer.parseInt(in.nextLine()), Integer.parseInt(in.nextLine()), in.nextLine(), in.nextLine()));
        }
        
        List<LichGD> res = new ArrayList<>();
        String s = in.nextLine();
        out.println("LICH GIANG DAY MON " + subjects.get(s) + ":");
        for (LichGD x : list) {
            if (x.mm.equals(s))
                res.add(x);
        }

        Collections.sort(res, new Comparator<LichGD>() {

            @Override
            public int compare(LichGD o1, LichGD o2) {
                if (o1.thu != o2.thu)
                    return Integer.compare(o1.thu, o2.thu);
                if (o1.kip != o2.kip)
                    return Integer.compare(o1.kip, o2.kip);
                return o1.gv.compareTo(o2.gv);
            }

        });
        for (LichGD x : res) out.println(x);
        out.close();
    }
}