import java.io.*;
import java.util.*;

class sv {
    String id, name, phoneNum;
    int group;

    public sv(String id, String name, String phoneNum, int group) {
        this.id = id;
        this.name = name;
        this.phoneNum = phoneNum;
        this.group = group;
    }

    public String toString() {
        return String.format("%s %s %s", id, name, phoneNum);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int m, n;
        n = in.nextInt();
        m = in.nextInt();
        in.nextLine();
        List<sv> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            list.add(new sv(in.nextLine(), in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine())));
        }

        String[] groups = new String[m];
        for (int i = 0; i < m; ++i) {
            groups[i] = in.nextLine();
        }
        n = in.nextInt();
        for (int i = 0; i < n; ++i) {
            int g = in.nextInt();
            out.printf("DANH SACH NHOM %d:\n", g);
            for (sv x : list)
                if (x.group == g)
                    out.println(x);
            out.printf("Bai tap dang ky: %s\n", groups[g - 1]);
        }
        out.close();
    }
}