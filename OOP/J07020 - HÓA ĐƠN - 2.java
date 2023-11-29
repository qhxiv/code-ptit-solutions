import java.io.*;
import java.util.*;

class Customer {
    static int num = 0;

    String id, name, gender, dob, address;

    public Customer(String name, String gender, String dob, String address) {
        ++num;
        this.id = String.format("KH%03d", num);
        this.name = name;
        this.gender = gender;
        this.dob = dob;
        this.address = address;
    }

    @Override
    public String toString() {
        return name + ' ' + address;
    }
}

class Product {
    static int num = 0;
    
    String id, name, unit;
    long buyPrice, sellPrice;

    public Product(String name, String unit, long buyPrice, long sellPrice) {
        ++num;
        this.id = String.format("MH%03d", num);
        this.name = name;
        this.unit = unit;
        this.buyPrice = buyPrice;
        this.sellPrice = sellPrice;
    }

    @Override
    public String toString() {
        return name + ' ' + unit + ' ' + buyPrice + ' ' + sellPrice;
    }
}

class Invoice {
    static int num = 0;

    String id, cusID, prodID;
    Customer customer;
    Product product;    
    long quantity, unitPrice;

    public Invoice(String cusID, String prodID, long quantity) {
        ++num;
        this.id = String.format("HD%03d", num);
        this.cusID = cusID;
        this.prodID = prodID;
        this.quantity = quantity;
    }

    void setCustomer(Customer x) {
        customer = x;
    }

    void setProduct(Product x) {
        product = x;
        unitPrice = x.sellPrice;
    }

    long getPayment() {
        return quantity * unitPrice;
    }

    @Override
    public String toString() {
        return id + ' ' + customer.toString() + ' ' + product.toString() + ' ' + quantity + ' ' + getPayment();
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("KH.in"));
        int n = Integer.parseInt(in.nextLine());
        HashMap<String, Customer> customers = new HashMap<>();
        while (n-- > 0) {
            String name = in.nextLine();
            String gender = in.nextLine();
            String dob = in.nextLine();
            String address = in.nextLine();
            Customer tmp = new Customer(name, gender, dob, address);
            customers.put(tmp.id, tmp);
        }

        in = new Scanner(new File("MH.in"));
        n = Integer.parseInt(in.nextLine());
        HashMap<String, Product> products = new HashMap<>();
        while (n-- > 0) {
            String name = in.nextLine();
            String unit = in.nextLine();
            long buyPrice = Long.parseLong(in.nextLine());
            long sellPrice = Long.parseLong(in.nextLine());
            Product tmp = new Product(name, unit, buyPrice, sellPrice);
            products.put(tmp.id, tmp);
        }

        in = new Scanner(new File("HD.in"));
        n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            String cusID = in.next();
            String prodID = in.next();
            int quantity = in.nextInt();
            Invoice tmp = new Invoice(cusID, prodID, quantity);
            tmp.setCustomer(customers.get(cusID));
            tmp.setProduct(products.get(prodID));
            out.println(tmp);
        }

        out.close();
    }
}