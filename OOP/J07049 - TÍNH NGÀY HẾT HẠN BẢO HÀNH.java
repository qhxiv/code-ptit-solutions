import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class sp {
    long price, bh;

    public sp(long price, long bh) {
        this.price = price;
        this.bh = bh;
    }
}

class kh {
    static SimpleDateFormat f = new SimpleDateFormat("dd/MM/yyyy");
    String id, name, dc, msp, hhbh;
    long payment;

    public kh(int i, sp o, String name, String dc, String msp, long quantity, String buyDate) throws ParseException {
        this.id = String.format("KH%02d", i);
        this.name = name;
        this.dc = dc;
        this.msp = msp;
        this.payment = quantity * o.price;
        long d = Long.parseLong(buyDate.substring(0, 2));
        long m = Long.parseLong(buyDate.substring(3, 5));
        long y = Long.parseLong(buyDate.substring(6));
        m += o.bh;
        y += m / 12;
        m %= 12;
        if (m == 0) {
            m = 12;
            --y;
        }
        this.hhbh = String.format("%02d/%02d/%04d", d, m, y);
    }

    public String toString() {
        return String.format("%s %s %s %s %d %s", id, name, dc, msp, payment, hhbh);
    }
}

public class Main {
    static SimpleDateFormat f = new SimpleDateFormat("dd/MM/yyyy");
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws ParseException, FileNotFoundException {
        in = new Scanner(new File("MUAHANG.in"));
        int n = in.nextInt();
        HashMap<String, sp> sps = new HashMap<>();
        for (int i = 0; i < n; ++i) {
            String s = in.next();
            in.nextLine();
            in.nextLine();
            sps.put(s, new sp(in.nextLong(), in.nextLong()));
        }

        n = in.nextInt();
        List<kh> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            in.nextLine();
            String name = in.nextLine();
            String dc = in.nextLine();
            String msp = in.next();
            list.add(new kh(i + 1, sps.get(msp), name, dc, msp, in.nextLong(), in.next())); 
        }
        Collections.sort(list, new Comparator<kh>() {

            @Override
            public int compare(kh o1, kh o2) {
                try {
                    return Long.compare(f.parse(o1.hhbh).getTime(), f.parse(o2.hhbh).getTime());
                } catch (ParseException e) {
                    e.printStackTrace();
                }
                return 0;

            }

        });
        for (kh x : list) out.println(x);
        out.close(); 
    }
}