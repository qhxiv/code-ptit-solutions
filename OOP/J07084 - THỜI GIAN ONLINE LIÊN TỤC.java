import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class Student implements Comparable<Student>{
    String name;
    long totalTime;
    SimpleDateFormat df = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");

    Student(String name, String start, String end) throws ParseException {
        this.name = name;
        Date sTime = df.parse(start);
        Date eTime = df.parse(end);
        totalTime = (eTime.getTime() - sTime.getTime()) / (1000 * 60);
    }

    @Override
    public String toString() {
        return name + " " + totalTime;
    }

    @Override
    public int compareTo(Student o) {
        if (totalTime != o.totalTime)
            return Long.compare(o.totalTime, totalTime);
        return name.compareTo(o.name);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        in = new Scanner(new File("ONLINE.in"));
        int n = in.nextInt();
        in.nextLine();
        List<Student> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            list.add(new Student(in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list);
        for (Student x: list) out.println(x);
        out.close();
    }
}