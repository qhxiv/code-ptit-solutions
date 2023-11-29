import java.io.*;
import java.util.*;

class Student {
    String name;
    int ac, submit;

    public Student(String name, int ac, int submit) {
        this.name = name;
        this.ac = ac;
        this.submit = submit;
    }
    
    public String toString() {
        return String.format("%s %d %d", name, ac, submit);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Student(in.nextLine(), in.nextInt(), Integer.parseInt(in.nextLine().trim())));
        }
        Collections.sort(list, new Comparator<Student>() {

            @Override
            public int compare(Student o1, Student o2) {
                if (o1.ac != o2.ac) return Integer.compare(o2.ac, o1.ac);
                if (o1.submit != o2.submit) return Integer.compare(o1.submit, o2.submit);
                return o1.name.compareTo(o2.name);
            }

        });
        for (Student x : list) out.println(x);
        out.close();
    }
}