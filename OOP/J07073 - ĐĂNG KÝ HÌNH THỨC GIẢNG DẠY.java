import java.io.*;
import java.util.*;

class Subject implements Comparable<Subject> {
    String id, name, theoryForm, practiceForm, credit;

    public Subject(String id, String name, String credit, String theoryForm, String practiceForm) {
        this.id = id;
        this.name = name;
        this.theoryForm = theoryForm;
        this.practiceForm = practiceForm;
        this.credit = credit;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + credit + " " + theoryForm + " " + practiceForm;
    }

    @Override
    public int compareTo(Subject o) {
        return id.compareTo(o.id);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("MONHOC.in"));
        int n = in.nextInt();
        in.nextLine();
        List<Subject> list = new ArrayList<>();
        String end = ".ptit.edu.vn";
        int eLength = end.length();
        for (int i = 0; i < n; ++i) {
            Subject x = new Subject(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine());
            String prac = x.practiceForm;
            if (!prac.equals("Truc tuyen") && prac.length() < eLength) continue;
            if (prac.equals("Truc tuyen") || prac.substring(prac.length() - eLength).equals(end))
                list.add(x);
        }
        Collections.sort(list);
        for (Subject x: list) out.println(x);
        out.close();
    }
}