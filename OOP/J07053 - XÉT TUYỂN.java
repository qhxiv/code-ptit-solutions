import java.io.*;
import java.util.*;

class Applicant {
    String name, id, rank;
    int age, average;
    static int num = 0;
    
    public Applicant(String name, String dob, double theory, double practice) {
        ++num;
        id = "PH";
        if (num < 10) id += "0";
        id += num;
        this.name = "";
        for (String x: name.trim().split("\\s+")) {
            this.name += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        }
        age = 2021 - Integer.parseInt(dob.substring(dob.length() - 4));
        double bonus = 0;
        if (theory >= 8 && practice >= 8) bonus = 1;
        else if (theory >= 7.5 && practice >= 7.5) bonus = 0.5;
        average = Math.min((int)(Math.round((theory + practice) / 2 + bonus)), 10);
        if (average < 5) rank = "Truot";
        else if (average <= 6) rank = "Trung binh";
        else if (average == 7) rank = "Kha";
        else if (average == 8) rank = "Gioi";
        else rank = "Xuat sac";
    }

    @Override
    public String toString() {
        return id + " " + name + age + " " + average +  " " + rank;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("XETTUYEN.in"));
        int n = in.nextInt();
        while (n-- > 0) {
            in.nextLine();
            out.println(new Applicant(in.nextLine(), in.nextLine(), in.nextDouble(), in.nextDouble()));
        }
        out.close();
    }
}