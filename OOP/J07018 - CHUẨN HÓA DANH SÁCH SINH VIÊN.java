import java.io.*;
import java.util.*;

class Student {
    static Integer num = 0;

    String id, name, className, dob;
    double gpa;

    Student(String name, String className, String dob, double gpa) {
        ++num;
        this.id = "B20DCCN0";
        if (num < 10) this.id += "0";
        this.id += num.toString();
        this.name = "";
        for (String x : name.trim().split("\\s+"))
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        this.className = className;
        if (dob.charAt(2) != '/')
            dob = "0" + dob;
        if (dob.charAt(5) != '/')
            dob = dob.substring(0, 3) + "0" + dob.substring(3);
        this.dob = dob;
        this.gpa = gpa;
    }

    public String toString() {
        return String.format("%s %s%s %s %.2f", id, name, className, dob, gpa);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("SINHVIEN.in"));

        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            out.println(new Student(in.nextLine(), in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine())));
        }
        out.close();
    }
}