import java.io.*;
import java.util.*;

class Good {
    static int quantity = 0;
    String id, name, group;
    double buyPrice, sellPrice, profit;

    Good(String name, String group, double buyPrice, double sellPrice) {
        ++quantity;
        id = "MH";
        if (quantity < 10) id += "0";
        id += quantity;
        this.name = name;
        this.group = group;
        this.buyPrice = buyPrice;
        this.sellPrice = sellPrice;
        profit = sellPrice - buyPrice;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + group + " " + String.format("%.2f", profit);
    }
}

public class Main {
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("MATHANG.in"));
        int n = Integer.parseInt(in.nextLine());
        List<Good> list = new ArrayList<>();
        while (n-- > 0)
            list.add(new Good(in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine())));
        Collections.sort(list, new Comparator<Good>() {
            @Override
            public int compare(Good o1, Good o2) {
                return Double.compare(o2.profit, o1.profit);
            }
        });
        for (Good x: list) out.println(x);
        out.close();
    }
}