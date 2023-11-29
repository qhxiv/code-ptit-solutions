import java.io.*;
import java.util.*;

class Product {
    static int num = 0;

    String id, name, unit;
    long shippingCharge, total, sellPrice;

    Product(String name, String unit, long unitPrice, long quantity) {
        ++num;
        this.id = String.format("MH%02d", num);
        this.name = name;
        this.unit = unit;
        shippingCharge = Math.round(unitPrice * quantity * 0.05);
        total = unitPrice * quantity + shippingCharge;
        sellPrice = (long) Math.ceil((total * 1.02 / quantity) / 100) * 100;
    }

    public String toString() {
        return String.format("%s %s %s %d %d %d", id, name, unit, shippingCharge, total, sellPrice);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Product> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Product(in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine()), Long.parseLong(in.nextLine())));
        }
        Collections.sort(list, new Comparator<Product>(){

            @Override
            public int compare(Product o1, Product o2) {
                return Long.compare(o2.sellPrice, o1.sellPrice);
            }

        });
        for (Product x : list) out.println(x);
        out.close();
    }
}