import java.io.*;
import java.util.*;

class Employee {
    static int num = 0;

    String id, name;
    long salary, bonus, allowance, total;

    Employee(String name, long wage, long nwd, String position) {
        ++num;
        this.id = String.format("NV%02d", num);
        this.name = name;
        this.salary = wage * nwd;
        this.bonus = 0;
        if (nwd >= 25) this.bonus = this.salary / 5;
        else if (nwd >= 22) this.bonus = this.salary / 10;
        this.allowance = 250000;
        if (position.equals("PGD")) this.allowance = 200000;
        else if (position.equals("TP")) this.allowance = 180000;
        else if (position.equals("NV")) this.allowance = 150000;
        this.total = this.salary + this.bonus + this.allowance;
    }

    public String toString() {
        return String.format("%s %s %d %d %d %d", id, name, salary, bonus, allowance, total);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        long sum = 0;
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            Employee tmp = new Employee(in.nextLine(), Long.parseLong(in.nextLine()), Long.parseLong(in.nextLine()), in.nextLine());
            sum += tmp.total;
            out.println(tmp);
        }
        out.printf("Tong chi phi tien luong: %d", sum);
        out.close();
    }
}