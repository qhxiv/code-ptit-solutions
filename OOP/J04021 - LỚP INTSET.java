import java.io.*;
import java.util.*;

class IntSet {
    TreeSet<Integer> set = new TreeSet<>();
    
    IntSet(int[] a) {
        for (int x : a) {
            set.add(x);
        }
    }

    IntSet union(IntSet a) {
        for (int x : a.set) {
            this.set.add(x);
        }
        return this;
    }

    public String toString() {
        String res = "";
        for (int x : this.set) {
            res += Integer.toString(x) + " ";
        }
        return res;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.union(s2);
        System.out.println(s3);
    }
}