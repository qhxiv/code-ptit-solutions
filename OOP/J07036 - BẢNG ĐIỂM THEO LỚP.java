import java.io.*;
import java.util.*;

class Student {
    String id, name, subId, subject, grade, className;

    public Student(String id, String name, String className) {
        this.id = id;
        this.name = name;
        this.className = className;
    }

    public Student clone() {
        return new Student(id, name, className);
    }

    public String toString() {
        return String.format("%s %s%s %s %s", id, name, subId, subject, grade);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("SINHVIEN.in"));
        int n = Integer.parseInt(in.nextLine());
        HashMap<String, Student> students = new HashMap<>();
        while (n-- > 0) {
            String id = in.nextLine();
            String name = "";
            for (String x : in.nextLine().trim().split("\\s+")) {
                name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + ' ';
            }
            Student tmp = new Student(id, name, in.nextLine());
            in.nextLine();

            students.put(id, tmp);
        }

        in = new Scanner(new File("MONHOC.in"));
        n = Integer.parseInt(in.nextLine());
        HashMap<String, String> subjects = new HashMap<>();
        while (n-- > 0) {
            subjects.put(in.nextLine(), in.nextLine());
            in.nextLine();
        }

        in = new Scanner(new File("BANGDIEM.in"));
        n = in.nextInt();
        List<Student> students2 = new ArrayList<>();
        while (n-- > 0) {
            String id = in.next();
            String subId = in.next();
            String grade = in.next();
            
            Student x = students.get(id).clone();
            x.subId = subId;
            x.subject = subjects.get(subId);
            x.grade = grade;
            students2.add(x);
        }

        n = in.nextInt();
        while (n-- > 0) {
            String s = in.next();
            List<Student> tmp = new ArrayList<>();
            for (Student x : students2) {
                if (x.className.equals(s)) {
                    tmp.add(x);
                }
            }
            Collections.sort(tmp, new Comparator<Student>() {

                @Override
                public int compare(Student o1, Student o2) {
                    if (o1.subId.equals(o2.subId))
                        return o1.id.compareTo(o2.id);
                    return o1.subId.compareTo(o2.subId);
                }
                
            });

            out.println("BANG DIEM lop " + s + ':');
            for (Student x : tmp)
                out.println(x);
        }


        out.close();
    }
}