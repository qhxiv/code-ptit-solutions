import java.io.*;
import java.util.*;

class WordSet {
    TreeSet<String> set = new TreeSet<>();

    WordSet(String path) throws FileNotFoundException {
        Scanner in = new Scanner(new File(path));
        while (in.hasNext())
            set.add(in.next().toLowerCase());
    }

    WordSet(TreeSet<String> set) {
        this.set = set;
    }

    WordSet difference(WordSet a) {
        TreeSet<String> res = new TreeSet<>();
        for (String x : this.set) {
            if (!a.set.contains(x))
                res.add(x);
        }
        return new WordSet(res);
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
        System.out.println(s1.difference(s2));
        System.out.println(s2.difference(s1));
    }
}