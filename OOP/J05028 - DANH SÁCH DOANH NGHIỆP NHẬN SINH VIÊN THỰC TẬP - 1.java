import java.io.*;
import java.util.*;

class Company {
    String id, name;
    int numberOfSlots;

    public Company(String id, String name, int numberOfSlots) {
        this.id = id;
        this.name = name;
        this.numberOfSlots = numberOfSlots;
    }

    public String toString() {
        return id + " " + name + " " + numberOfSlots;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Company> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Company(in.nextLine(),in.nextLine(), Integer.parseInt(in.nextLine())));
        }
        Collections.sort(list, new Comparator<Company>() {

            @Override
            public int compare(Company o1, Company o2) {
                if (o1.numberOfSlots == o2.numberOfSlots)
                    return o1.id.compareTo(o2.id);
                return Integer.compare(o2.numberOfSlots, o1.numberOfSlots);
            }

        });
        for (Company x : list) out.println(x);
        out.close();
    }
}