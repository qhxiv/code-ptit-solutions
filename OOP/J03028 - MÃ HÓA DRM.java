import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);

    static String rotate(String s) {
        int n = 0;
        for (int i = 0; i < s.length(); ++i)
            n += s.charAt(i) - 'A';
        String res = "";
        for (int i = 0; i < s.length(); ++i)
            res += (char)((n + s.charAt(i)) % 26 + 'A');
        return res;
    }

    static String merge(String s1, String s2) {
        String res = "";
        for (int i = 0; i < s1.length(); ++i)
            res +=(char)((s1.charAt(i) - 'A' + s2.charAt(i) - 'A') % 26 + 'A');
        return res;
    }

    static String solve(String s) {
        int n = s.length();
        return merge(rotate(s.substring(0, n / 2)), rotate(s.substring(n / 2)));
    }
    
    public static void main(String[] args) {
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            out.println(solve(in.nextLine()));
        }
        out.close();
    }
}