package javaapplication1;

import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class Student {
    static Integer num = 0;
    
    String ma, ten, gt, ns, dc, mst, nkhd;
    Date cmp;
    
    Student(String name, String sex, String dob, String addr, String id, String date) throws ParseException {
        ma = "000";
        ++num;
        if (num < 10) ma += "0";
        ma += num.toString();
        ten = name;
        gt = sex;
        ns = dob;
        dc = addr;
        mst = id;
        nkhd = date;
        
        SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
        cmp = formatter.parse(dob);
    }
    
    public String toString() {
        return String.format("%s %s %s %s %s %s %s", ma, ten, gt, ns, dc, mst, nkhd);
    }
}

public class JavaApplication1 {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws ParseException {
        List<Student> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Student(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Student>(){
 
            @Override
            public int compare(Student o1, Student o2) {
                return Long.compare(o1.cmp.getTime(), o2.cmp.getTime());
            }
        });
        for (Student x : list)
            out.println(x);
        out.close();
    }
}