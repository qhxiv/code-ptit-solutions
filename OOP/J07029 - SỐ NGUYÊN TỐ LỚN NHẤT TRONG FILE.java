import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);

	static Boolean[] p = Collections.nCopies(1000001, true).toArray(new Boolean[0]);

	static void sieve() {
		p[0] = p[1] = false;
		for (int i = 2; i <= 1000; ++i) {
			if (p[i]) {
				for (int j = i * i; j <= 1000000; j += i)
					p[j] = false;
			}
		}
	}
	
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		sieve();
		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
		ArrayList<Integer> list = (ArrayList<Integer>)ois.readObject();
		int[] cnt = new int[1000001];
		for (int x : list) {
			if (p[x]) ++cnt[x];
		}
		int f = 0;
		for (int i = 1000000; i >= 2; --i) {
			if (cnt[i] > 0) {
				out.println(i + " " + cnt[i]);
				++f;
			}
			if (f == 10) break;
		}
		out.close();
	}
}