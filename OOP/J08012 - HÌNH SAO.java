import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    static String solve(int[] cnt) {
        int n = cnt.length - 1;
        boolean f = false;
        for (int i = 1; i < n; ++i) {
            if (cnt[i] != 1 && cnt[i] != n - 1)
                return "No";
            else if (cnt[i] == n - 1)
                if (!f) f = true;
                else return "No";
        }
        return "Yes";
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        int[] cnt = new int[n + 1];
        for (int i = 1; i < n; ++i) {
            ++cnt[in.nextInt()];
            ++cnt[in.nextInt()];
        }
        out.print(solve(cnt));
        out.close();
    }
}