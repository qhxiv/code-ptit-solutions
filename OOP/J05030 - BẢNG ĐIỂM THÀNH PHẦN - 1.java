import java.io.*;
import java.util.*;

class Student {
    String id, name, className;
    double g1, g2, g3;

    public Student(String id, String name, String className, double g1, double g2, double g3) {
        this.id = id;
        this.name = name;
        this.className = className;
        this.g1 = g1;
        this.g2 = g2;
        this.g3 = g3;
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %.1f %.1f %.1f", id, name, className, g1, g2, g3);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Student(in.nextLine(), in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine())));
        }
        Collections.sort(list, new Comparator<Student>() {

            @Override
            public int compare(Student o1, Student o2) {
                return o1.id.compareTo(o2.id);
            }

        });
        for (int i = 0; i < T; ++i) {
            out.print(i + 1);
            out.println(" " + list.get(i));
        }
        out.close();
    }
}