import java.io.*;
import java.util.*;

class Student {
    String id, name, tel, project;
    int group;

    Student(String id, String name, String tel) {
        this.id = id;
        this.name = name;
        this.tel = tel;
    }

    void setProject(String s) {
        project = s;
    }

    void setGroup(int n) {
        group = n;
    }

    public String toString() {
        return String.format("%s %s %s %d %s", id, name, tel, group, project);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("SINHVIEN.in"));
        int n = Integer.parseInt(in.nextLine());
        HashMap<String, Student> mp = new HashMap<>();
        for (int i = 0; i < n; ++i) {
            String id = in.nextLine();
            String name = in.nextLine();
            String tel = in.nextLine();
            mp.put(id, new Student(id, name, tel));
        }
        
        in = new Scanner(new File("BAITAP.in"));
        List<String> projects = new ArrayList<>();
        int m = Integer.parseInt(in.nextLine());
        while (m-- > 0) {
            projects.add(in.nextLine());
        }
        
        in = new Scanner(new File("NHOM.in"));
        for (int i = 0; i < n; ++i) {
            String id = in.next();
            int group = in.nextInt();
            mp.get(id).setGroup(group);
            mp.get(id).setProject(projects.get(group - 1));
        }
        
        List<Student> list = new ArrayList<>(mp.values());
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