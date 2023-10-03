import java.io.*;
import java.util.*;

class Student {
	String ID, name, className, email;

	Student(String ID, String name, String className, String email) {
		this.ID = ID;
		this.name = "";
		name = name.trim() + ' '; String word = "";
		for (int i = 0; i < name.length(); ++i) {
			if (name.charAt(i) == ' ') {
				if (word != "") {
					this.name += word.substring(0, 1).toUpperCase() + word.substring(1).toLowerCase() + ' ';
					word = "";
				}
			} else word += name.charAt(i);
		}
		this.className = className;
		this.email = email;
	}

	@Override
	public String toString() {
		return String.format("%s %s%s %s", ID, name, className, email);
	}
}

public class Main {
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new File("SINHVIEN.in"));
		int n = Integer.parseInt(in.nextLine());
		List<Student> list = new ArrayList<>();
		while (n-- > 0) {
			String ID = in.nextLine();
			String name = in.nextLine();
			String className = in.nextLine();
			String email = in.nextLine();
			list.add(new Student(ID, name, className, email));
		}
		Collections.sort(list, (Student o1, Student o2) -> o1.ID.compareTo(o2.ID));
		for (Student x: list) out.println(x);
		out.close();
	}
}