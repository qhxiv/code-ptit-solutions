import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.TreeSet;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	static boolean[] p = new boolean[1000001];
	
	static void sieve() {
		for (int i =2 ; i <= 1000000; ++i) {
			p[i] = true;
		}
		
		for (int i = 2; i <= 1000; ++i) {
			if (p[i]) {
				for (int j = i * i; j <= 1000000; j += i) {
					p[j] = false;
				}
			}
		}
	}

	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		sieve();

		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA1.in"));
		ArrayList<Integer> a = (ArrayList<Integer>)ois.readObject();
		ois = new ObjectInputStream(new FileInputStream("DATA2.in"));
		ArrayList<Integer> b = (ArrayList<Integer>)ois.readObject();
		
		TreeSet<Integer> c = new TreeSet<>(a);
		TreeSet<Integer> d = new TreeSet<>(b);
		for (int x: c) {
			int y = 1000000 - x;
			if (p[x] && p[y] && x < y && d.contains(y))
				out.println(x + " " + y);
		}
		out.close();
	}
}