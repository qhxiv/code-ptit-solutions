import java.io.*;
import java.util.*;

class Product {
    String id, name, warrantyTime;
    int price;

    Product(String id, String name, int price, String warrantyTime) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.warrantyTime = warrantyTime;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + price + " " + warrantyTime;
    }
}

public class Main {
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new File("SANPHAM.in"));
        int n = Integer.parseInt(in.nextLine());
        List<Product> list = new ArrayList<>();
        while (n-- > 0) {
            list.add(new Product(in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine()), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Product>() {
            @Override
            public int compare(Product o1, Product o2) {
                if (o1.price != o2.price)
                    return -Integer.compare(o1.price, o2.price);
                return o1.id.compareTo(o2.id);
            }
        });
        for (Product x: list) out.println(x);
		out.close();
	}
}