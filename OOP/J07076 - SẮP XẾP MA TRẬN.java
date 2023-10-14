import java.io.*;
import java.util.*;

public class Main {
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("MATRIX.in"));
        int T = Integer.parseInt(in.nextLine());
        for (int tt = 0; tt < T; ++tt) {
            int n = in.nextInt();
            int m = in.nextInt();
            int k = in.nextInt();
            int[][] a = new int[n][m];
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    a[i][j] = in.nextInt();
                    if (j == k - 1) list.add(a[i][j]);
                }
            }
            Collections.sort(list);
            for (int i = 0; i < n; ++i) {
                a[i][k - 1] = list.get(i);
            }
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j)
                    out.print(a[i][j] + " ");
                out.println();
            }
        }
        out.close();
    }
}