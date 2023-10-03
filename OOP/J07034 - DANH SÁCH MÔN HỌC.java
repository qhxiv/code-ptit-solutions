import java.io.*;
import java.util.*;

class Subject {
	String id, name;
	int size;
	
	Subject(String id, String name, int size) {
		this.id = id;
		this.name = name;
		this.size = size;
	}

	@Override
	public String toString() {
		return id + " " + name + " " + size;
	}
}

public class Main {
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new File("MONHOC.in"));
		int n = Integer.parseInt(in.nextLine());
		List<Subject> list = new ArrayList<>();
		while (n-- > 0) {
			list.add(new Subject(in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine())));
		}
		Collections.sort(list, (Subject o1, Subject o2) -> o1.name.compareTo(o2.name));
		for (Subject x: list) out.println(x);
		out.close();
	}
}