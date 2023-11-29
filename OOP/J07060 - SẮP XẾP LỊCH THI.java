import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class ct {
    String id, nt, gt, pt;

    public ct(String nt, String gt, String pt) {
        this.nt = nt;
        this.gt = gt;
        this.pt = pt;
    }
}
class lt {
    String id, mt, n1, n2;
    ct c;

    lt(ct c, String id, String mt, String n1, String n2) {
        this.id = id;
        this.c = c;
        this.mt = mt;
        this.n1 = n1;
        this.n2 = n2;
    }

    public String toString() {
        return String.format("%s %s %s %s %s %s", c.nt, c.gt, c.pt, mt, n1, n2);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    static SimpleDateFormat f = new SimpleDateFormat("dd/MM/yyyy HH:mm");
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("MONTHI.in"));
        int n = in.nextInt();
        HashMap<String, String> subjects = new HashMap<>();
        while (n-- > 0) {
            String id = in.next();
            in.nextLine();
            subjects.put(id, in.nextLine());
            in.nextLine();
        }

        in = new Scanner(new File("CATHI.in"));
        n = in.nextInt();
        HashMap<String, ct> cts = new HashMap<>();
        for (int i = 0; i < n; ++i) {
            cts.put(String.format("C%03d", i + 1), new ct(in.next(), in.next(), in.next()));
        }

        in = new Scanner(new File("LICHTHI.in"));
        n = in.nextInt();
        List<lt> list = new ArrayList<>();
        while (n-- > 0) {
            String id = in.next();
            list.add(new lt(cts.get(id), id, subjects.get(in.next()), in.next(), in.next()));
        }
        Collections.sort(list, new Comparator<lt>() {

            @Override
            public int compare(lt o1, lt o2) {
                String n1 = "";
                String n2 = "";
                n1 += o1.c.nt + ' ' + o1.c.gt;
                n2 += o2.c.nt + ' ' + o2.c.gt;
                if (n1.equals(n2))
                    return o1.id.compareTo(o2.id);
                try {
                    return Long.compare(f.parse(n1).getTime(), f.parse(n2).getTime());
                } catch (ParseException e) {
                }
                return 0;
            }

        });
        for (lt x : list) out.println(x);
        out.close();
    }
}