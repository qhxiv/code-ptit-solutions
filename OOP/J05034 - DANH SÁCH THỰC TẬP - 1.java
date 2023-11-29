import java.io.*;
import java.util.*;

class Student {
    static int num = 0;

    String id, name, className, email, company;
    int oNum;

    public Student(String id, String name, String className, String email, String company) {
        ++num;
        this.oNum = num;
        this.id = id;
        this.name = name;
        this.className = className;
        this.email = email;
        this.company = company;
    }

    @Override
    public String toString() {
        return String.format("%d %s %s %s %s %s", oNum, id, name, className, email, company);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Student(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2) {
                return o1.name.compareTo(o2.name);
            }
        });
        
        T = Integer.parseInt(in.nextLine());
        while (T-- > 0) {
            String s = in.nextLine();
            for (Student x : list) {
                if (s.equals(x.company))
                    out.println(x);
            }
        }
        out.close();
    }
}