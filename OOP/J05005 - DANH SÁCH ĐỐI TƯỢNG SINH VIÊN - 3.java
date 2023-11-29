import java.io.*;
import java.util.*;

class Student {
    static Integer num = 0;

    String id, name, className, dob;
    double gpa;

    Student(String name, String className, String dob, double gpa) {
        ++num;
        id = "B20DCCN0";
        if (num < 10) id += "0";
        id += num.toString();
        this.name = "";
        for (String x : name.trim().split("\\s+")) {
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        }
        this.className = className;
        if (dob.charAt(2) != '/')
            dob = "0" + dob;
        if (dob.charAt(5) != '/')
            dob = dob.substring(0, 3) + "0" + dob.substring(3);
        this.dob = dob;
        this.gpa = gpa;
    }

    public String toString() {
        return id + " " + name + className + " " + dob + " " + String.format("%.2f", gpa);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            String name = in.nextLine();
            String className = in.nextLine();
            String dob = in.nextLine();
            double gpa = Double.parseDouble(in.nextLine());
            list.add(new Student(name, className, dob, gpa));
        }
        Collections.sort(list, new Comparator<Student>() {

            @Override
            public int compare(Student o1, Student o2) {
                return Double.compare(o2.gpa, o1.gpa);
            }
            
        });
        for (Student x : list)
            out.println(x);
        out.close();
    }
}