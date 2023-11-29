import java.io.*;
import java.util.*;

class WordSet {
    TreeSet<String> set = new TreeSet<>();

    WordSet() {}
    
    WordSet(String s) {
        s = s.toLowerCase();
        for (String x : s.split("\\s+")) {
            set.add(x);
        }
    }

    WordSet union(WordSet a) {
        WordSet res = new WordSet(this.toString());
        for (String x : a.set) {
            res.set.add(x.toLowerCase());
        }

        return res;
    }

    WordSet intersection(WordSet a) {
        WordSet res = new WordSet();
        for (String x : a.set) {
            if (this.set.contains(x))
                res.set.add(x);
        }
        return res;
    }
    
    public String toString() {
        String res = "";
        for (String x : this.set) {
            res += x + " ";
        }

        return res;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}