package javaapplication1;

import java.io.*;
import java.util.*;

class Student {
    static Integer num = 0;
    
    String id, name, rank;
    double grade;
    
    Student(String name, String grades) {
        ++num;
        this.id = "HS";
        if (num < 10) this.id += "0";
        this.id += num.toString();
        this.name = name;
        this.grade = 0;
        int cnt = 0;
        for (String x : grades.trim().split("\\s+")) {
            ++cnt;
            double y = Double.parseDouble(x);
            this.grade += y;
            if (cnt <= 2) this.grade += y;
        }
        this.grade /= 12;
        if (this.grade >= 9) this.rank = "XUAT SAC";
        else if (this.grade >= 8) this.rank = "GIOI";
        else if (this.grade >= 7) this.rank = "KHA";
        else if (this.grade >= 5) this.rank = "TB";
        else this.rank = "YEU";
    }
    
    public String toString() {
        return String.format("%s %s %.1f %s", id, name, (double)Math.round(grade * 10) / 10, rank);
    }
}

public class JavaApplication1 {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Student(in.nextLine(), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2) {
                if (o1.grade == o2.grade)
                    return o1.id.compareTo(o2.id);
                return Double.compare(o2.grade, o1.grade);
            }
            
        });
        for (Student x : list)
            out.println(x);
        out.close();
    }
}