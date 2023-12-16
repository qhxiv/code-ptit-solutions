import java.io.*;
import java.util.*;

class sv {
    String id, name, phoneNum, assignment;
    int group;

    public sv(String id, String name, String phoneNum, int group) {
        this.id = id;
        this.name = name;
        this.phoneNum = phoneNum;
        this.group = group;
    }

    public String toString() {
        return String.format("%s %s %s %d %s", id, name, phoneNum, group, assignment);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<sv> list = new ArrayList<>();
        int n = in.nextInt();
        int m = in.nextInt();
        in.nextLine();
        for (int i = 0; i < n; ++i) {
            list.add(new sv(in.nextLine(), in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine())));
        }
        for (int i = 0; i < m; ++i) {
            String s = in.nextLine();
            for (sv x : list)
                if (x.group == i + 1)
                    x.assignment = s;
        }
        Collections.sort(list, new Comparator<sv>() {

            @Override
            public int compare(sv o1, sv o2) {
                return o1.id.compareTo(o2.id);
            }

        });
        for (sv x : list) out.println(x);
        out.close();
    }
}