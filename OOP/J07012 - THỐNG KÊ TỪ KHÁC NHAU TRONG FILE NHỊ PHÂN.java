import java.io.*;
import java.util.*;

class Pair<T, V> {
    T first;
    V second;

    Pair(T f, V s) {
        first = f;
        second = s;
    }

    public String toString() {
        return first + " " + second;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> strList = (ArrayList<String>)ois.readObject();
        ArrayList<Pair<String, Integer>> list = new ArrayList<>();
        HashMap<String, Integer> mp = new HashMap<>();
        
        for (String s : strList) {
            s = s.toLowerCase();
            for (String x : s.split("[^a-z0-9]+")) {
                if (x.isEmpty()) continue;
                mp.put(x, mp.getOrDefault(x, 0) + 1);
            }
        }
        for (String x : mp.keySet()) {
            list.add(new Pair<>(x, mp.get(x)));
        }
        Collections.sort(list, new Comparator<Pair<String, Integer>>() {
            @Override
            public int compare(Pair<String, Integer> o1, Pair<String, Integer> o2) {
                int n1 = o1.second, n2 = o2.second;
                if (n1 != n2) return Integer.compare(n2, n1);
                return o1.first.compareTo(o2.first);
            }
        });
        for (Pair<String, Integer> x : list)
            out.println(x);
        out.close();
    }
}