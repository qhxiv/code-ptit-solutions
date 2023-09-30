import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Subject implements Comparable<Subject> {
	String ID, name, finalExam;

	Subject(String ID, String name, String finalExam) {
		this.ID = ID;
		this.name = name;
		this.finalExam = finalExam;
	}

	@Override
	public int compareTo(Subject a) {
		return this.ID.compareTo(a.ID);
	}

	@Override
	public String toString() {
		return ID + " " + name + " " + finalExam;
	}
}

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("MONHOC.in"));
		int n = Integer.parseInt(in.nextLine());
		ArrayList<Subject> a = new ArrayList<>();
		while (n-- > 0) {
			Subject tmp = new Subject(in.nextLine(), in.nextLine(), in.nextLine());
			a.add(tmp);
		}
		Collections.sort(a);
		for (Subject x : a) {
			out.println(x);
		}
		out.close();
	}
}