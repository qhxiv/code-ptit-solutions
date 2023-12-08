import java.io.*;
import java.util.*;

class ts {
    String id, name, rank;
    int age, grade;

    ts(int i, String name, String ns, double lt, double th) {
        id = String.format("PH%02d", i);
        this.name = name;
        age = 2021 - Integer.parseInt(ns.substring(ns.length() - 4));
        double dt = 0;
        if (lt >= 8 && th >= 8) dt = 1;
        else if (lt >= 7.5 && th >= 7.5) dt = 0.5;
        grade = (int) Math.round((lt + th)/2 + dt);
        if (grade > 10) grade = 10;
        if (grade < 5) rank = "Truot";
        else if (grade <= 6) rank = "Trung binh";
        else if (grade == 7) rank = "Kha";
        else if (grade == 8) rank = "Gioi";
        else rank = "Xuat sac";
    }

    public String toString() {
        return String.format("%s %s %d %d %s", id, name, age, grade, rank);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            in.nextLine();
            out.println(new ts(tt + 1, in.nextLine(), in.next(), in.nextDouble(), in.nextDouble()));
        }
        out.close();
    }
}