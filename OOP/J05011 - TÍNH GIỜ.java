package javaapplication1;

import java.io.*;
import java.util.*;

class Gamer {
    String id, name;
    long hour, min, total;
    
    Gamer(String ma, String ten, String vao, String ra) {
        id = ma;
        name = ten;
        long in = Long.parseLong(vao.substring(0, 2)) * 60 + Long.parseLong(vao.substring(3));
        long out = Long.parseLong(ra.substring(0, 2)) * 60 + Long.parseLong(ra.substring(3));
        total = out - in;
        hour = total / 60;
        min = total - hour * 60;
    }
    
    public String toString() {
        return String.format("%s %s %d gio %d phut", id, name, hour, min);
    }
}

public class JavaApplication1 {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        List<Gamer> list = new ArrayList<>();
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            list.add(new Gamer(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list, new Comparator<Gamer>(){
            @Override
            public int compare(Gamer o1, Gamer o2) {
                return Long.compare(o2.total, o1.total);
            }
            
        });
        for (Gamer x : list)
            out.println(x);
        out.close();
    }
}