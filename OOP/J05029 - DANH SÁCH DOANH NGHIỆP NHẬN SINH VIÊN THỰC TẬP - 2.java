import java.io.*;
import java.util.*;

class DoanhNghiep {
    String id, name;
    int num;

    public DoanhNghiep(String id, String name, int num) {
        this.id = id;
        this.name = name;
        this.num = num;
    }

    @Override
    public String toString() {
        return String.format("%s %s %d", id, name, num);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<DoanhNghiep> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            String id = in.nextLine();
            String name = in.nextLine();
            int num = Integer.parseInt(in.nextLine());
            list.add(new DoanhNghiep(id, name, num));
        }
        Collections.sort(list, new Comparator<DoanhNghiep>() {
            @Override
            public int compare(DoanhNghiep o1, DoanhNghiep o2) {
                if (o1.num != o2.num)
                    return Integer.compare(o2.num, o1.num);
                return o1.id.compareTo(o2.id);
            }
        });
        
        T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            int a = in.nextInt();
            int b = in.nextInt();
            out.printf("DANH SACH DOANH NGHIEP NHAN TU %d DEN %d SINH VIEN:\n", a, b);
            for (DoanhNghiep x : list) {
                if (x.num >= a && x.num <= b)
                    out.println(x);
            }
        }
        out.close();
    }
}