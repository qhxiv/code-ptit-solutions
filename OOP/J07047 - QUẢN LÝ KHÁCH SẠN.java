import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class room {
    long rent;
    double service;

    public room(long rent, double service) {
        this.rent = rent;
        this.service = service;
    }
}

class kh {
    static SimpleDateFormat f = new SimpleDateFormat("dd/MM/yyyy");
    String id, name, rId;
    long snlt;
    double payment;

    public kh(int i, room o, String name, String rId, String ci, String co) throws ParseException {
        this.id = String.format("KH%02d", i);
        this.name = name;
        this.rId = rId;
        this.snlt = (f.parse(co).getTime() - f.parse(ci).getTime())/1000/60/60/24;
        this.payment = this.snlt * o.rent;
        if (this.snlt == 0) this.payment = o.rent;
        double discount = 0.94;
        if (this.snlt < 10) discount = 1;
        else if (this.snlt < 20) discount = 0.98;
        else if (this.snlt < 30) discount = 0.96;
        this.payment *= (1 + o.service) * discount;
    }

    public String toString() {
        return String.format("%s %s %s %d %.2f", id, name, rId, snlt, payment);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        in = new Scanner(new File("DATA.in"));
        int n = in.nextInt();
        HashMap<String, room> mp = new HashMap<>();
        for (int i = 0; i < n; ++i) {
            String c = in.next();
            in.next();
            mp.put(c, new room(in.nextLong(), in.nextDouble()));
        }

        n = in.nextInt();
        List<kh> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            in.nextLine();
            String name = in.nextLine();
            String rId = in.next();
            list.add(new kh(i + 1, mp.get(rId.substring(2, 3)), name, rId, in.next(), in.next()));
        }
        Collections.sort(list, new Comparator<kh>() {

            @Override
            public int compare(kh o1, kh o2) {
                return Long.compare(o2.snlt, o1.snlt);
            }
            
        });
        for (kh x : list) out.println(x);
        out.close();
    }
}