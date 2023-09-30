import java.util.Scanner;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static void main(String[] args) {
        int n = in.nextInt();
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                int x = in.nextInt();
                if (i < j && x == 1) {
                    System.out.printf("(%d,%d)\n", i, j);
                }
            }
        }
    }
}