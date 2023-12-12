import java.io.*;
import java.util.*;

class hp {
    String id, name, group, teacher;

    public hp(String id, String name, String group, String teacher) {
        this.id = id;
        this.name = name;
        this.group = group;
        this.teacher = teacher;
    }

    public String toString() {
        return String.format("%s %s %s", id, name, group);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<hp> list = new ArrayList<>();
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; ++i)
            list.add(new hp(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        Collections.sort(list, new Comparator<hp>() {

            @Override
            public int compare(hp o1, hp o2) {
                if (!o1.id.equals(o2.id))
                    return o1.id.compareTo(o2.id);
                return o1.group.compareTo(o2.group);
            }

        });
        n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            String teacher = in.nextLine();
            out.printf("Danh sach cho giang vien %s:\n", teacher);
            for (hp x : list)
                if (x.teacher.equals(teacher))
                    out.println(x);
        }
        out.close();
    }
}