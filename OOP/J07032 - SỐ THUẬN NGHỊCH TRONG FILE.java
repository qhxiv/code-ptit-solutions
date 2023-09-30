import java.io.*;
import java.util.*;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	static boolean check(int n) {
		StringBuilder s = new StringBuilder(Integer.toString(n));
		if (!s.toString().equals(s.reverse().toString())) return false;
		
		int d = 0;
		while (n > 0) {
			if ((n % 10) % 2 == 0) return false;
			++d;
			n /= 10;
		}

		return d % 2 == 1 && d > 1;
	}

	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA1.in"));
		ArrayList<Integer> a = (ArrayList<Integer>)ois.readObject();

		ois = new ObjectInputStream(new FileInputStream("DATA2.in"));
		ArrayList<Integer> b = (ArrayList<Integer>)ois.readObject();

		HashSet<Integer> c = new HashSet<>(a);
		HashSet<Integer> d = new HashSet<>(b);

		TreeMap<Integer, Integer> mp = new TreeMap<>();
		for (int x: a) {
			if (d.contains(x) && check(x)) {
				int y = (mp.get(x) == null) ? 1 : mp.get(x) + 1;
				mp.put(x, y);
			}
		}
		for (int x: b) {
			if (c.contains(x) && check(x)) {
				int y = (mp.get(x) == null) ? 1 : mp.get(x) + 1;
				mp.put(x, y);
			}
		}

		int i = 0;
		for (int x: mp.keySet()) {
			out.println(x + " " + mp.get(x));
			++i;
			if (i >= 10) break;
		}
		out.close();
	}
}