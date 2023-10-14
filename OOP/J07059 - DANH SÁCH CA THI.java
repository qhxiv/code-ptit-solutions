import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class CaThi implements Comparable<CaThi> {
    static int num = 0;
    String id, date, timeline, room;

    CaThi(String date, String timeline, String room) {
        id = String.format("C%03d", ++num);
        this.id = id;
        this.date = date;
        this.timeline = timeline;
        this.room = room;
    }

    @Override
    public int compareTo(CaThi o) {
        if (date.equals(o.date) && timeline.equals(o.timeline))
            return id.compareTo(o.id);
        SimpleDateFormat dateF = new SimpleDateFormat("dd/MM/yyyy");
        SimpleDateFormat timeF = new SimpleDateFormat("HH:mm");
        Date a1, a2, b1, b2;
        try {
            a1 = dateF.parse(date);
            a2 = timeF.parse(timeline);
            b1 = dateF.parse(o.date);
            b2 = timeF.parse(o.timeline);
            return Long.compare(a1.getTime() + a2.getTime(), b1.getTime() + b2.getTime());
        } catch (ParseException e) {}
        return 0;
    }

    @Override
    public String toString() {
        return id + " " + date + " " + timeline + " " + room;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("CATHI.in"));
        int n = in.nextInt();
        in.nextLine();
        List<CaThi> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            list.add(new CaThi(in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list);
        for (CaThi x: list) out.println(x);
        out.close();
    }
}