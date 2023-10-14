import java.io.*;
import java.util.*;

class Customer implements Comparable<Customer> {
    static int num = 0;
    String name, id;
    int uQuota, aQuota, vat, total;

    Customer(String name, String type, int sIndex, int eIndex) {
        id = String.format("KH%02d", ++num);
        this.name = "";
        for (String x: name.trim().split("\\s+"))
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        int elecIndex = eIndex - sIndex;
        int quota = 0;
        if (type.equals("A")) quota = 100;
        else if (type.equals("B")) quota = 500;
        else if (type.equals("C")) quota = 200;
        uQuota = Math.min(elecIndex, quota) * 450;
        aQuota = Math.max(elecIndex - quota, 0) * 1000;
        vat = (int)(aQuota * 0.05f);
        total = uQuota + aQuota + vat;
    }
    
    @Override
    public String toString() {
        return id + " " + name + uQuota + " " + aQuota + " " + vat + " " + total;
    }

    @Override
    public int compareTo(Customer o) {
        return Integer.compare(o.total, total);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("KHACHHANG.in"));
        int n = in.nextInt();
        List<Customer> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            in.nextLine();
            list.add(new Customer(in.nextLine(), in.next(), in.nextInt(), in.nextInt()));
        }
        Collections.sort(list);
        for (Customer x: list) out.println(x);
        out.close();
    }
}