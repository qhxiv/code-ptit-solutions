import java.io.*;
import java.util.*;

class Student implements Comparable<Student> {
    String id, name;
    double avg;
    static int num = 0;

    Student(String name, double g1, double g2, double g3) {
        id = String.format("SV%02d", ++num);
        this.name = "";
        for (String x: name.trim().split("\\s+")) {
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        }
        avg = (g1 * 3 + g2 * 3 + g3 * 2) / 8;
    }

    @Override
    public String toString() {
        return String.format("%s %s%.2f", id, name, avg);
    }

    @Override
    public int compareTo(Student o) {
        if (avg == o.avg) return id.compareTo(o.id);
        return Double.compare(o.avg, avg);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("BANGDIEM.in"));
        List<Student> list = new ArrayList<>();
        int n = in.nextInt();
        for (int i = 0; i < n; ++i) {
            in.nextLine();
            list.add(new Student(in.nextLine(), in.nextDouble(), in.nextDouble(), in.nextDouble()));
        }
        Collections.sort(list);
        out.println(list.get(0) + " 1");
        int rank = 1;
        for (int i = 1; i < n; ++i) {
            if (list.get(i).avg != list.get(i - 1).avg)
                rank = i + 1;
            out.println(list.get(i) + " " + rank);
        }
        out.close();
    }
}