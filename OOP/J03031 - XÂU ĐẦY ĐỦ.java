import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            String s = in.nextLine();
            int k = Integer.parseInt(in.nextLine());
            HashSet<Character> set = new HashSet<>();
            for (int i = 0; i < s.length(); ++i) {
                char x = s.charAt(i);
                if (x >= 'a' && x <= 'z')
                    set.add(x);
            }
            if (k >= 26 - set.size())
                out.println("YES");
            else out.println("NO");
        }
        out.close();
    }
}