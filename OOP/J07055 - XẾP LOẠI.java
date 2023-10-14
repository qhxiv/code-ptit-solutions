import java.io.*;
import java.util.*;

class Student implements Comparable<Student> {
    static int num = 0;
    String id, name, rank;
    float grade;

    Student(String name, float g1, float g2, float g3) {
        id = String.format("SV%02d", ++num);
        this.name = "";
        for (String x: name.trim().split("\\s+"))
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        grade = g1 * 0.25f + g2 * 0.35f + g3 * 0.4f;
        if (grade >= 8) rank = "GIOI";
        else if (grade >= 6.5) rank = "KHA";
        else if (grade >= 5) rank = "TRUNG BINH";
        else rank = "KEM";
    }

    @Override
    public String toString() {
        return String.format("%s %s%.2f %s", id, name, grade, rank);
    }

    @Override
    public int compareTo(Student o) {
        return Float.compare(o.grade, grade);
    }
}

public class Main {
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("BANGDIEM.in"));
        int n = in.nextInt();
        List<Student> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            in.nextLine();
            list.add(new Student(in.nextLine(), in.nextFloat(), in.nextFloat(), in.nextFloat()));
        }
        Collections.sort(list);
        for (Student x: list) out.println(x);
        out.close();
    }
}