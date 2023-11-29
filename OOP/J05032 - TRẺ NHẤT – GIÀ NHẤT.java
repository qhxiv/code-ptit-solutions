import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class Person {
    static SimpleDateFormat df = new SimpleDateFormat("dd/MM/yyyy");

    String name;
    Date dob;

    Person(String name, String dob) throws ParseException {
        this.name = name;
        this.dob = df.parse(dob);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws ParseException {
        List<Person> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Person(in.next(), in.next()));
        }
        Collections.sort(list, new Comparator<Person>() {
            @Override
            public int compare(Person o1, Person o2) {
                return Long.compare(o1.dob.getTime(), o2.dob.getTime());
            }
        });
        out.println(list.get(list.size() - 1).name);
        out.println(list.get(0).name);
        out.close();
    }
}