import java.io.*;
import java.util.*;

class Student {
    String id, name, className, email;

    public Student(String id, String name, String className, String email) {
        this.id = id;
        this.name = name;
        this.className = className;
        this.email = email;
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %s", id, name, className, email);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; ++i) {
            list.add(new Student(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; ++i) {
            String s = in.nextLine().toUpperCase();
            String key = "DCKT";
            if (s.equals("CONG NGHE THONG TIN"))
                key = "DCCN";
            else if (s.equals("AN TOAN THONG TIN"))
                key = "DCAT";
            else if (s.equals("VIEN THONG"))
                key = "DCVT";
            else if (s.equals("DIEN TU"))
                key = "DCDT";
            out.println("DANH SACH SINH VIEN NGANH " + s +":");
            boolean f = (key == "DCCN" || key == "DCAT");
            for (Student x : list) {
                if (f && x.className.charAt(0) == 'E')
                    continue;
                if (x.id.contains(key))
                    out.println(x);
            }
        }
        out.close();
    }
}