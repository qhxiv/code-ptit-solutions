import java.io.*;
import java.util.*;

class Product {
    String id, name;
    long price1, price2;

    public Product(String id, String name, long price1, long price2) {
        this.id = id;
        this.name = name;
        this.price1 = price1;
        this.price2 = price2;
    }
}

class Invoice {
    static int num = 0;

    String id, name;
    double discount;
    long unitPrice, total, dropPrice, payment, quantity;

    Invoice(String id, long quantity) {
        ++num;
        this.id = String.format("%s-%03d", id, num);
        this.quantity = quantity;
        this.discount = 0;
        if (quantity >= 150) discount = 0.5;
        else if (quantity >= 100) discount = 0.3;
        else if (quantity >= 50) discount = 0.15;
    }

    public String toString() {
        return id + ' ' + name + ' ' + dropPrice + ' ' + payment;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("DATA1.in"));
        int n = Integer.parseInt(in.nextLine());
        HashMap<String, Product> mp = new HashMap<>();
        while (n-- > 0) {
            String id = in.nextLine();
            String name = in.nextLine();
            long price1 = Long.parseLong(in.nextLine());
            long price2 = Long.parseLong(in.nextLine());
            mp.put(id, new Product(id, name, price1, price2));
        }
        
        in = new Scanner(new File("DATA2.in"));
        n = in.nextInt();
        while (n-- > 0) {
            String id = in.next();
            long quantity = in.nextLong();
            Invoice a = new Invoice(id, quantity);
            Product p = mp.get(id.substring(0, 2));

            a.name = p.name;
            if (id.charAt(id.length() - 1) == '1') a.unitPrice = p.price1;
            else a.unitPrice = p.price2;
            a.total = a.unitPrice * a.quantity;
            a.dropPrice = (long)(a.total * a.discount);
            a.payment = a.total - a.dropPrice;

            out.println(a);
        }
        out.close();
    }
}