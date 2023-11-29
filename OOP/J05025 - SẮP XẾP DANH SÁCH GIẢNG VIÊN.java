import java.io.*;
import java.util.*;

class Professor {
    static Integer num = 0;

    String id, name, major, firstName;

    Professor(String name, String major) {
        id = "GV";
        ++num;
        if (num < 10) id += "0";
        id += num.toString();      
        this.name = name;
        String[] tmp = name.split("\\s+");
        firstName = tmp[tmp.length - 1];
        this.major = "";
        for (String x : major.trim().split("\\s+")) {
            this.major += x.substring(0, 1).toUpperCase();
        }
    }

    public String toString() {
        return String.format("%s %s %s", id, name, major);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Professor> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Professor(in.nextLine(), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Professor>() {

            @Override
            public int compare(Professor o1, Professor o2) {
                if (o1.firstName.equals(o2.firstName))
                    return o1.id.compareTo(o2.id);
                return o1.firstName.compareTo(o2.firstName);
            }
            
        });
        for (Professor x : list)
            out.println(x);
        out.close();
    }
}