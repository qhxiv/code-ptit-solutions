import java.io.*;
import java.util.*;

class Enterprise {
	String id, name;
	int numberOfIntern;

	Enterprise(String id, String name, int numberOfIntern) {
		this.id = id;
		this.name = name;
		this.numberOfIntern = numberOfIntern;
	}

	@Override
	public String toString() {
		return id + " " + name + " " + numberOfIntern;
	}
}

public class Main {
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new File("DN.in"));
		List<Enterprise> list = new ArrayList<>();
		int n = Integer.parseInt(in.nextLine());
		while (n-- > 0) {
			list.add(new Enterprise(in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine())));
		}
		Collections.sort(list, (Enterprise o1, Enterprise o2) -> o1.id.compareTo(o2.id));
		for (Enterprise x: list) out.println(x);
		out.close();
	}
}