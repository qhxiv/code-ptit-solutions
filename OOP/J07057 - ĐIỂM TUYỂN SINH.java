import java.io.*;
import java.util.*;

class Candidate implements Comparable<Candidate> {
    static int num = 0;
    String id, name, status;
    double grade;

    Candidate(String name, double grade, String ethnie, int region) {
        id = String.format("TS%02d", ++num);
        this.name = "";
        for (String x: name.trim().split("\\s+"))
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        double bonus = 0;
        if (region == 1) bonus = 1.5;
        else if (region == 2) bonus = 1;
        if (!ethnie.equals("Kinh")) bonus += 1.5;
        this.grade = grade + bonus;
        status = this.grade >= 20.5 ? "Do" : "Truot";
    }

    @Override
    public int compareTo(Candidate o) {
        if (grade == o.grade) return id.compareTo(o.id);
        return Double.compare(o.grade, grade);
    }

    @Override
    public String toString() {
        return String.format("%s %s%.1f %s", id, name, grade, status);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("THISINH.in"));
        int n = in.nextInt();
        List<Candidate> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            in.nextLine();
            list.add(new Candidate(in.nextLine(), Double.parseDouble(in.nextLine()), in.nextLine(), in.nextInt()));
        }
        Collections.sort(list);
        for (Candidate x: list) out.println(x);
        out.close();
    }
}