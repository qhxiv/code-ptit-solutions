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
        HashMap<String, ArrayList<Student>> mp = new HashMap<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            String id = in.nextLine();
            String name = in.nextLine();
            String className = in.nextLine();
            String email = in.nextLine();
            
            if (mp.get(className) == null)
                mp.put(className, new ArrayList<Student>());
            mp.get(className).add(new Student(id, name, className, email));
        }
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; ++i) {
            String s = in.nextLine();
            out.println("DANH SACH SINH VIEN LOP " + s + ":");
            for (Student x : mp.get(s))
                out.println(x);
        }
        out.close();
    }
}