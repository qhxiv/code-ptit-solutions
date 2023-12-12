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
        return String.format("%s %s", group, teacher);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        HashMap<String, ArrayList<hp>> mp = new HashMap<>();
        HashMap<String, String> mp2 = new HashMap<>();
        int n = in.nextInt();
        in.nextLine();
        for (int i = 0; i < n; ++i) {
            String id = in.nextLine();
            String name = in.nextLine();
            if (mp.get(id) == null)
                mp.put(id, new ArrayList<hp>());
            mp.get(id).add(new hp(id, name, in.nextLine(), in.nextLine()));
            mp2.put(id, name);
        }
        
        n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            String id = in.nextLine();
            out.printf("Danh sach nhom lop mon %s:\n", mp2.get(id));
            Collections.sort(mp.get(id), new Comparator<hp>() {

                @Override
                public int compare(hp o1, hp o2) {
                    return o1.group.compareTo(o2.group);
                }
                
            });
            for (hp x : mp.get(id))
                out.println(x);
        }
        out.close();
    }
}