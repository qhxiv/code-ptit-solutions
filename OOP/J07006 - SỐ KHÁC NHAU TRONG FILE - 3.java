import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args)
		throws IOException, ClassNotFoundException
	{
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
		ArrayList<Integer> l = (ArrayList<Integer>)ois.readObject();
		int[] cnt = new int[1001];
		for (int i : l) {
			++cnt[i];
		}
		for (int i = 0; i <= 1000; ++i) {
			if (cnt[i] > 0) {
				out.printf("%d %d\n", i, cnt[i]);
			}
		}
		out.close();
	}
}