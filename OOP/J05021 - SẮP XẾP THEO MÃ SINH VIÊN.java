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

    public String toString() {
        return String.format("%s %s %s %s", id, name, className, email);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();
        try {
            while (true)
                list.add(new Student(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        } catch (Exception e) {
            // TODO: handle exception
        }
        Collections.sort(list, new Comparator<Student>() {

            @Override
            public int compare(Student o1, Student o2) {
                return o1.id.compareTo(o2.id);
            }
            
        });
        for (Student x : list) out.println(x);
        out.close();
    }
}