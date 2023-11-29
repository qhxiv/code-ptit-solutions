import java.io.*;
import java.util.*;

class Professor {
    static Integer num = 0;

    String id, name, major;

    Professor(String name, String major) {
        ++num;
        this.id = "GV";
        if (num < 10) this.id += "0";
        this.id += num.toString();
        this.name = name;
        this.major = "";
        for (String x : major.trim().split("\\s+"))
            this.major += x.substring(0, 1).toUpperCase();
    }

    public String toString() {
        return id + " " + name + " " + major;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Professor> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Professor(in.nextLine(), in.nextLine()));
        }
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; ++i) {
            String s = in.nextLine();
            String key = "";
            for (String x : s.trim().split("\\s+"))
                key += x.substring(0, 1).toUpperCase();
            out.println("DANH SACH GIANG VIEN BO MON " + key + ":");
            for (Professor x : list)
                if (x.major.equals(key))
                    out.println(x);
        }
        out.close();
    }
}