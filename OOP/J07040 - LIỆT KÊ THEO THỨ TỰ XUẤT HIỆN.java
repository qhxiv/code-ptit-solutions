import java.io.*;
import java.util.*;

public class Main {
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
		HashSet<String> se = new HashSet<>();
		for (String x: (ArrayList<String>)(ois.readObject())) {
			x = x.toLowerCase();
			String[] arr = x.trim().split("\\s+");
			for (String y: arr)
				se.add(y);
		}
		HashSet<String> appeared = new HashSet<>();
		Scanner in = new Scanner(new File("VANBAN.in"));
		
		try {
			while (true) {
				String[] arr = in.nextLine().trim().split("\\s+");
				for (String x: arr) {
					x = x.toLowerCase();
					if (se.contains(x) && !appeared.contains(x)) {
						out.println(x);
						appeared.add(x);
					}
				}
			}
		} catch (Exception e) {
			// TODO: handle exception
		}
		out.close();
	}
}