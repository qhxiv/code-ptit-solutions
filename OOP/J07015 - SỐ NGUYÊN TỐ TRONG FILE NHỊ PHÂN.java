import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	static Boolean[] isPrime = Collections.nCopies(10001, true).toArray(new Boolean[0]);
	
	static void sieve() {
		isPrime[0] = isPrime[1] = false;
		for (int i = 2; i * i <= 10000; ++i) {
			if (isPrime[i]) {
				for (int j = i * i; j <= 10000; j += i) {
					isPrime[j] = false;
				}
			}
		}
	}

	public static void main(String[] args)
		throws FileNotFoundException, IOException, ClassNotFoundException
	{
		sieve();
		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
		int[] cnt = new int[10001];
		ArrayList<Integer> l = (ArrayList<Integer>)ois.readObject();
		for (int i : l) {
			if (isPrime[i]) ++cnt[i];
		}
		for (int i = 2; i <= 10000; ++i) {
			if (cnt[i] > 0) {
				out.printf("%d %d\n", i, cnt[i]);
			}
		}
		out.close();
	}
}