import java.io.*;
import java.util.*;

class Student {
    String id, name, className, grade;

    public Student(String id, String name, String className) {
        this.id = id;
        this.name = name;
        this.className = className;
    }
    
    public String toString() {
        return id + ' ' + name + className + ' ' + grade;
    }
}

class Transcript {
    String id, subId, grade;

    public Transcript(String id, String subId, String grade) {
        this.id = id;
        this.subId = subId;
        this.grade = grade;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("MONHOC.in"));
        int n = Integer.parseInt(in.nextLine());
        HashMap<String, String> subjects = new HashMap<>();
        while (n-- > 0) {
            subjects.put(in.nextLine(), in.nextLine());
            in.nextLine();
        }

        in = new Scanner(new File("SINHVIEN.in"));
        n = Integer.parseInt(in.nextLine());
        HashMap<String, Student> mp = new HashMap<>();
        while (n-- > 0) {
            String id = in.nextLine();
            String name = "";
            for (String x : in.nextLine().trim().split("\\s+")) {
                name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + ' ';
            }
            mp.put(id, new Student(id, name, in.nextLine()));
            in.nextLine();
        }
        
        in = new Scanner(new File("BANGDIEM.in"));
        List<Transcript> list = new ArrayList<>();
        n = in.nextInt();
        while (n-- > 0) {
            list.add(new Transcript(in.next(), in.next(), in.next()));
        }

        n = in.nextInt();
        while (n-- > 0) {
            String s = in.next();
            List<Student> tmp = new ArrayList<>();
            for (Transcript x : list) {
                if (x.subId.equals(s)) {
                    Student t = mp.get(x.id);
                    t.grade = x.grade;
                    tmp.add(t);
                }
            }
            Collections.sort(tmp, new Comparator<Student>() {

                @Override
                public int compare(Student o1, Student o2) {
                    double g1 = Double.parseDouble(o1.grade);
                    double g2 = Double.parseDouble(o2.grade);
                    if (g1 != g2) return Double.compare(g2, g1);
                    return o1.id.compareTo(o2.id);
                }

            });

            out.println("BANG DIEM MON " + subjects.get(s) + ':');
            for (Student x : tmp) out.println(x);
        }
        out.close();
    }
}