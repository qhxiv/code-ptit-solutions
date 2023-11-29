import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int num = 0;
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            ++num;
            String name = in.nextLine();
            String unit = in.nextLine();
            long unitPrice = Long.parseLong(in.nextLine());
            long quantity = Long.parseLong(in.nextLine());

            long shippingCharge = Math.round((unitPrice * quantity) * 0.05);
            long total = unitPrice * quantity + shippingCharge;
            long sellPrice = total + Math.round(total * 0.02);

            out.printf("MH%02d %s %s %d %d %d\n", num, name, unit, shippingCharge, total, sellPrice);
        }
        out.close();
    }
}