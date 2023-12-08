import java.io.*;
import java.util.*;

class hs {
    String id, name, rank;
    double grade;
    int pos;

    hs(int i, String name, double grade) {
        id = String.format("HS%02d", i);
        this.name = name;
        this.grade = grade;
        if (grade < 5) rank = "Yeu";
        else if (grade < 7) rank = "Trung Binh";
        else if (grade < 9) rank = "Kha";
        else rank = "Gioi";
    }

    public String toString() {
        return String.format("%s %s %.1f %s %d", id, name, grade, rank, pos);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<hs> list = new ArrayList<>();
        TreeSet<Double> se = new TreeSet<>();
        int T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
            in.nextLine();
            String name = in.nextLine();
            double grade = in.nextDouble();
            list.add(new hs(tt + 1, name, grade));
            se.add(grade);
        }
        int pos = 1;
        Iterator<Double> it = se.descendingIterator();
        while (it.hasNext()) {
            int cnt = 0;
            double y = it.next();
            for (hs x : list) {
                if (x.grade == y) {
                    ++cnt;
                    x.pos = pos;
                }
            }
            pos += cnt;
        }
        for (hs x: list) out.println(x);
        out.close();
    }
}