import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class Customer {
    static Integer num = 0;
    
    String id, name, sex, address, dob;
    long cmp;

    Customer(String name, String sex, String dob, String address) throws ParseException {
        ++num;
        this.id = "KH0";
        if (num < 10) this.id += "0";
        this.id += num.toString();
        this.name = "";
        for (String x : name.trim().split("\\s+"))
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        this.sex = sex;
        if (dob.charAt(2) != '/')
            dob = "0" + dob;
        if (dob.charAt(5) != '/')
            dob = dob.substring(0, 3) + "0" + dob.substring(3);
        this.dob = dob;
        this.address = address;
        SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
        this.cmp = formatter.parse(dob).getTime();
    }

    public String toString() {
        return String.format("%s %s%s %s %s", id, name, sex, address, dob);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        in = new Scanner(new File("KHACHHANG.in"));
        List<Customer> list = new ArrayList<>();
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; ++i) {
            list.add(new Customer(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Customer>() {
            @Override
            public int compare(Customer o1, Customer o2) {
                return Long.compare(o1.cmp, o2.cmp);
            }
        });
        for (Customer x : list) out.println(x);
        out.close();
    }
}