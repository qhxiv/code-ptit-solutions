import java.io.*;
import java.util.*;

class Student {
    String id, name, status;
    double bonus, grade;

    Student(String id, String name, double g1, double g2, double g3) {
        this.id = id;
        this.name = name;
        char x = id.charAt(2);
        if (x == '1') {
            this.bonus = 0.5;
        } else if (x == '2') {
            this.bonus = 1;
        } else this.bonus = 2.5;
        this.grade = g1*2 + g2 + g3;
        if (this.grade + this.bonus >= 24) this.status = "TRUNG TUYEN";
        else this.status = "TRUOT";
    }

    @Override
    public String toString() {
        String bonus = String.format((int)this.bonus == this.bonus ? "%.0f" : "%.1f", this.bonus);
        String grade = String.format((int)this.grade == this.grade ? "%.0f" : "%.1f", this.grade);
        return String.format("%s %s %s %s %s", this.id, this.name, bonus, grade, this.status);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        out.print(new Student(in.nextLine(), in.nextLine(), in.nextDouble(), in.nextDouble(), in.nextDouble()));
        out.close();
    }
}