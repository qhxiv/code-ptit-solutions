import java.io.*;
import java.util.*;

class WordSet {
    Scanner in;
    TreeSet<String> set = new TreeSet<>();

    WordSet(String path) throws FileNotFoundException {
        in = new Scanner(new File(path));
        try {
            while (true) {
                for (String x : in.nextLine().trim().toLowerCase().split("\\s+"))
                    set.add(x);
            }
        } catch (Exception e) {
            // TODO: handle exception
        }
    }

    WordSet(TreeSet<String> set) {
        this.set = set;
    }

    WordSet union(WordSet a) {
        TreeSet<String> union = new TreeSet<>();
        union.addAll(this.set);
        union.addAll(a.set);
        return new WordSet(union);
    }

    WordSet intersection(WordSet a) {
        TreeSet<String> intersection = new TreeSet<>();
        intersection.addAll(this.set);
        intersection.retainAll(a.set);
        return new WordSet(intersection);
    }

    public String toString() {
        String res = "";
        for (String x : set) res += x + " ";
        return res;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in");
        WordSet s2 = new WordSet("DATA2.in");
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}