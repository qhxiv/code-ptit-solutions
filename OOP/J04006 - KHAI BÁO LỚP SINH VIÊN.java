import java.io.PrintWriter;
import java.util.Scanner;

class SinhVien {
    String msv, ten, lop, ns;
    double gpa;

    SinhVien() {
        msv = ten = lop = ns = "";
        gpa = 0;
    }

    void bd() {
        int f = ns.indexOf("/");
        int l = ns.lastIndexOf("/");
        String date = ns.substring(0, f);
        String month = ns.substring(f + 1, l);
        String year = ns.substring(l + 1);
        if (date.length() == 1)
            date = "0" + date;
        if (month.length() == 1)
            month = "0" + month;
        ns = date + "/" + month + "/" + year;
    }

    public String toString() {
        return String.format("%s %s %s %s %.2f", msv, ten, lop, ns, gpa);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        
        SinhVien sv = new SinhVien();
        sv.msv = "B20DCCN001";
        sv.ten = in.nextLine();
        sv.lop = in.nextLine();
        sv.ns = in.nextLine();
        sv.gpa = in.nextDouble();
        sv.bd();
        out.print(sv);

        out.flush();
    }
}
