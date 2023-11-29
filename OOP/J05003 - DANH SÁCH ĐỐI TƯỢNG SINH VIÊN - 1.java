import java.io.*;
import java.util.*;

class Student {
    static int num = 0;

    String id, name, className, dob;
    double gpa;

    Student(String name, String className, String dob, double gpa) {
        Student.num++;
        this.id = "B20DCCN0";
        if (Student.num < 10) this.id += "0";
        this.id += Integer.toString(Student.num);
        this.name = name;
        this.className = className;
        if (dob.charAt(2) != '/')
            dob = "0" + dob;
        if (dob.charAt(5) != '/')
            dob = dob.substring(0, 3) + "0" + dob.substring(3);
        this.dob = dob;
        this.gpa = gpa;
    }

    public String toString() {
        return id + " " + name + " " + className + " " + dob + " " + String.format("%.2f", this.gpa);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            out.println(new Student(in.nextLine(), in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine())));
        }
        out.close();
    }
}