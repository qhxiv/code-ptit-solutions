import java.io.*;
import java.util.*;

class IntSet {
    TreeSet<Integer> se = new TreeSet<>();

    IntSet(int[] a) {
        for (int x : a) se.add(x);
    }

    IntSet(List<Integer> a) {
        for (int x : a) se.add(x);
    }

    IntSet intersection(IntSet o) {
        List<Integer> list = new ArrayList<>();
        for (int x : this.se)
            if (o.se.contains(x))
                list.add(x);
        return new IntSet(list);
    }

    public String toString() {
        String res = "";
        for (int x : se)
            res += x + " ";
        return res;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.intersection(s2);
        System.out.println(s3);
    }
}