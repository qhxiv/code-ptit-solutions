import java.io.File;
import java.io.PrintWriter;
import java.util.Scanner;
import java.util.TreeMap;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
        try {
			in = new Scanner(new File("DATA.in"));
			TreeMap<Integer, Integer> m = new TreeMap<>();
			
			while (in.hasNext()) {
				int x = Integer.parseInt(in.next());
				int y = ((m.get(x) == null) ? 1 : m.get(x) + 1);
				m.put(x, y);
			}
			for (int i : m.keySet()) {
				out.println(i + " " + m.get(i));
			}
			
		} catch (Exception e) {
			// TODO: handle exception
		}

		out.close();
	}
}