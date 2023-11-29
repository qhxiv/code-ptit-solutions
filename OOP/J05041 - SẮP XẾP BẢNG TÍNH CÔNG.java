import java.io.*;
import java.util.*;

class Employee {
    static int num = 0;

    String id, name;
    long salary, bonus, allowance, income;

    Employee(String name, long wage, long workDay, String position) {
        ++num;
        this.id = String.format("NV%02d", num);
        this.name = name;
        this.salary = wage * workDay;
        this.bonus = 0;
        if (workDay >= 25) this.bonus = this.salary / 5;
        else if (workDay >= 22) this.bonus = this.salary / 10;
        this.allowance = 250000;
        if (position.equals("PGD")) this.allowance = 200000;
        else if (position.equals("TP")) this.allowance = 180000;
        else if (position.equals("NV")) this.allowance = 150000;
        this.income = this.salary + this.bonus + this.allowance;
    }

    public String toString() {
        return String.format("%s %s %d %d %d %d", id, name, salary, bonus, allowance, income);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Employee> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Employee(in.nextLine(), Long.parseLong(in.nextLine()), Long.parseLong(in.nextLine()), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Employee>() {

            @Override
            public int compare(Employee o1, Employee o2) {
                return Long.compare(o2.income, o1.income);
            }

        });
        for (Employee x : list) out.println(x);
        out.close();
    }
}