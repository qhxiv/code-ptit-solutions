import java.io.*;
import java.util.*;

class sv {
    String id, name, className;

    public sv(String id, String name, String className) {
        this.id = id;
        this.name = "";
        for (String x : name.trim().split("\\s+"))
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        this.className = className;
    }

    public String toString() {
        return String.format("%s %s%s", id, name, className);
    }
}

class dn {
    String id, name;
    int quantity;

    public dn(String id, String name, int quantity) {
        this.id = id;
        this.name = name;
        this.quantity = quantity;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("SINHVIEN.in"));
        int n = Integer.parseInt(in.nextLine());
        HashMap<String, sv> svs = new HashMap<>();
        for (int i = 0; i < n; ++i) {
            String id = in.nextLine();
            svs.put(id, new sv(id, in.nextLine(), in.nextLine()));
            in.nextLine();
        }
        
        in = new Scanner(new File("DN.in"));
        n = Integer.parseInt(in.nextLine());
        HashMap<String, dn> dns = new HashMap<>();
        for (int i = 0; i < n; ++i) {
            String id = in.nextLine();
            dns.put(id, new dn(id, in.nextLine(), Integer.parseInt(in.nextLine())));
        }

        in = new Scanner(new File("THUCTAP.in"));
        n = Integer.parseInt(in.nextLine());
        HashMap<String, ArrayList<String>> tt = new HashMap<>();
        for (int i = 0; i < n; ++i) {
            String svi = in.next();
            String dni = in.next();
            if (tt.get(dni) == null)
                tt.put(dni, new ArrayList<String>());
            tt.get(dni).add(svi);
        }
        n = in.nextInt();
        while (n-- > 0) {
            String id = in.next();
            Collections.sort(tt.get(id));
            out.printf("DANH SACH THUC TAP TAI %s:\n", dns.get(id).name);
            int cnt = 0;
            for (String x : tt.get(id)) {
                out.println(svs.get(x));
                ++cnt;
                if (cnt == dns.get(id).quantity) break;
            }
        }

        out.close();
    }
}