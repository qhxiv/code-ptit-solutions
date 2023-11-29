import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("STRING.in"));
        int n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            String s = in.nextLine();
            String t = in.nextLine();
            int l1 = s.length();
            int l2 = t.length();
            for (int i = 0; i < l1 - l2 + 1; ++i) {
                if (t.equals(s.substring(i, i + l2)))
                    out.printf("%d ", i + 1);
            }
            out.println();
        }
        out.close();
    }
}