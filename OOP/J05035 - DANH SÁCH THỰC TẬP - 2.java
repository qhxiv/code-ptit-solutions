import java.io.*;
import java.util.*;

class Student {
    static int num = 0;

    int oNum;
    String id, name, className, email, company;

    public Student(String id, String name, String className, String email, String company) {
        ++num;
        this.oNum = num;
        this.id = id;
        this.name = name;
        this.className = className;
        this.email = email;
        this.company = company;
    }
    
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
        Collections.sort(list, new Comparator<Student>() {

            @Override
            public int compare(Student o1, Student o2) {
                return o1.id.compareTo(o2.id);
            }

        });
        
        int n = in.nextInt();
        while (n-- > 0) {
            String s = in.next();
            for (Student x : list) {
                if (s.equals(x.company))
                    out.println(x);
            }
        }
        out.close();
    }
}