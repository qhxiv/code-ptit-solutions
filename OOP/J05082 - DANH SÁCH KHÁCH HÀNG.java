import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class kh {
    String id, name, gender, address, dob;

    kh(int i, String name, String gender, String dob, String address) {
        id = String.format("KH%03d", i);
        this.name = "";
        for (String x : name.trim().split("\\s+"))
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        this.gender = gender;
        if (dob.charAt(2) != '/')
            dob = "0" + dob;
        if (dob.charAt(5) != '/')
            dob = dob.substring(0, 3) + "0" + dob.substring(3);
        this.dob = dob;
        this.address = address;
    }

    public String toString() {
        return String.format("%s %s%s %s %s", id, name, gender, address, dob);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<kh> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new kh(tt + 1, in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        SimpleDateFormat f = new SimpleDateFormat("dd/MM/yyyy");
        Collections.sort(list, new Comparator<kh>() {
            @Override
            public int compare(kh o1, kh o2) {
                Date d1, d2;
                try {
                    d1 = f.parse(o1.dob);
                    d2 = f.parse(o2.dob);
                    return Long.compare(d1.getTime(), d2.getTime());
                } catch (ParseException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
                return 0;
            }
        });
        for (kh x : list) out.println(x);
        out.close();
    }
}