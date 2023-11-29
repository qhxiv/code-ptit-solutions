import java.io.*;
import java.util.*;

class Teacher {
    String id, name;
    double hour;

    Teacher(String id, String name) {
        this.id = id;
        this.hour = 0;
        this.name = name;
    }

    void updateHour(double n) {
        hour += n;
    }

    public String toString() {
        return String.format("%s %.2f", name, hour);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("GIANGVIEN.in"));
        List<String> list = new ArrayList<>();
        HashMap<String, Teacher> mp = new HashMap<>();
        int n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            String s = in.nextLine();
            String id = s.substring(0, 4);
            String name = s.substring(5);
            list.add(id);
            mp.put(id, new Teacher(id, name));
        }

        in = new Scanner(new File("GIOCHUAN.in"));
        n = in.nextInt();
        while (n-- > 0) {
            String id = in.next();
            in.next();
            double hour = in.nextDouble();
            mp.get(id).updateHour(hour);
        }
        for (String x : list) {
            out.println(mp.get(x));
        }

        out.close();
    }
}