import java.io.*;
import java.util.*;

class LichGD {
    static Integer num = 0;

    String maNhom, maMon, tenGV, phong, tenMon;
    int kip, thu;

    public LichGD(String maMon, int thu, int kip, String tenGV, String phong) {
        this.maMon = maMon;
        this.tenGV = tenGV;
        this.phong = phong;
        this.kip = kip;
        this.thu = thu;

        ++num;
        this.maNhom = String.format("HP%03d", num);
    }

    public void setTenMon(String s) {
        tenMon = s;
    }

    @Override
    public String toString() {
        return String.format("%s %s %d %d %s", maNhom, tenMon, thu, kip, phong);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("MONHOC.in"));
        HashMap<String, String> subjects = new HashMap<>();
        int n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            subjects.put(in.nextLine().trim(), in.nextLine().trim());
            in.nextLine();
        }

        in = new Scanner(new File("LICHGD.in"));
        List<LichGD> listLichGD = new ArrayList<>();
        n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            String maMon = in.nextLine().trim();
            int thu = Integer.parseInt(in.nextLine());
            int kip = Integer.parseInt(in.nextLine());
            String tenGV = in.nextLine().trim();
            String phong = in.nextLine().trim();

            LichGD tmp = new LichGD(maMon, thu, kip, tenGV, phong);
            tmp.setTenMon(subjects.get(maMon));
            listLichGD.add(tmp);
        }

        List<LichGD> res = new ArrayList<>();
        String tenGV1 = in.nextLine();
        out.println("LICH GIANG DAY GIANG VIEN " + tenGV1 + ":");
        for (LichGD x : listLichGD)
            if (x.tenGV.equals(tenGV1))
                res.add(x);
        Collections.sort(res, new Comparator<LichGD>() {

            @Override
            public int compare(LichGD o1, LichGD o2) {
                if (o1.thu != o2.thu) return Integer.compare(o1.thu, o2.thu);
                if (o1.kip != o2.kip) return Integer.compare(o1.kip, o2.kip);
                return o1.tenGV.compareTo(o2.tenGV);
            }
            
        });
        for (LichGD x : res) out.println(x);
        out.close();
    }
}