package javaapplication1;

import java.io.*;
import java.util.*;

class Student {
    String id, name, className, email;
    
    Student(String id, String name, String className, String email) {
        this.id = id;
        this.name = name;
        this.className = className;
        this.email = email;
    }
    
    public String toString() {
        return String.format("%s %s %s %s ", id, name, className, email);
    } 
}

public class JavaApplication1 {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Student(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2) {
                if (o1.className.equals(o2.className))
                       return o1.id.compareTo(o2.id);
                return o1.className.compareTo(o2.className);
            }
            
        });
        for (Student x : list) out.println(x);
        out.close();
    }
}