import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args)
		throws IOException
	{
        DataInputStream dis = new DataInputStream(new FileInputStream("DATA.IN"));
		int[] cnt = new int[1001];
		for (int i = 0; i < 100000; ++i) {
			++cnt[dis.readInt()];
		}
		for (int i = 0; i <= 1000; ++i) {
			if (cnt[i] > 0) {
				out.printf("%d %d\n", i, cnt[i]);
			}
		}
		out.close();
	}
}