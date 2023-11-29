import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA1.in"));
        List<Integer> list1 = (ArrayList<Integer>)ois.readObject();
        ois = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> list2 = (ArrayList<Integer>)ois.readObject();

        boolean[] p = new boolean[10005];
        for (int i = 2; i <= 10000; ++i) p[i] = true;
        for (int i = 2; i <= 100; ++i)
            if (p[i])
                for (int j = i * i; j <= 10000; j += i)
                    p[j] = false;

        TreeMap<Integer, Integer> mp1 = new TreeMap<>();
        TreeMap<Integer, Integer> mp2 = new TreeMap<>();
        for (int x : list1)
            if (p[x])
                mp1.put(x, mp1.get(x) == null ? 1 : mp1.get(x) + 1);
        for (int x : list2)
            if (p[x])
                mp2.put(x, mp2.get(x) == null ? 1 : mp2.get(x) + 1);
        
        for (int x : mp1.keySet()) {
            if (mp2.keySet().contains(x))
                out.printf("%d %d %d\n", x, mp1.get(x), mp2.get(x));
        }
        
        out.close();
    }
}