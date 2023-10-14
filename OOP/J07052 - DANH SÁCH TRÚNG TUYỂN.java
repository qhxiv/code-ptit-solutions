import java.io.*;
import java.util.*;

class ThiSinh {
    String ma, ten, tt;
    double toan, ly, hoa, ut, xt;

    ThiSinh(String ma1, String ten1, double toan1, double ly1, double hoa1) {
        ma = ma1;
        ten = "";
        toan = toan1;
        ly = ly1;
        hoa = hoa1;
        
        for (String x: ten1.trim().split("\\s+")) {
            ten += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        }
        char tmp = ma.charAt(2);
        if (tmp == '1') ut = 0.5;
        else if (tmp == '2') ut = 1.0;
        else ut = 2.5;
        xt = toan * 2 + ly + hoa + ut;
    }

    public String toString() {
        return ma + ' ' + ten +
               ((int)ut == ut ? String.format("%.0f", ut) : String.format("%.1f", ut)) + ' ' +
               ((int)xt == xt ? String.format("%.0f", xt) : String.format("%.1f", xt)) + ' ' +
               tt;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("THISINH.in"));
        int n = Integer.parseInt(in.nextLine());
        List<ThiSinh> list = new ArrayList<>();
        while (n-- > 0) {
            list.add(new ThiSinh(in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine())));
        }
        Collections.sort(list, new Comparator<ThiSinh>() {
            public int compare(ThiSinh a, ThiSinh b) {
                if (a.xt != b.xt) return Double.compare(b.xt, a.xt);
                return a.ma.compareTo(b.ma);
            }
        });
        n = Integer.parseInt(in.nextLine());
        double diemChuan = list.get(n - 1).xt;
        out.printf("%.1f\n", diemChuan);
        for (ThiSinh x: list) x.tt = (x.xt >= diemChuan) ? "TRUNG TUYEN" : "TRUOT";
        for (ThiSinh x: list) out.println(x);
        out.close();
    }
}