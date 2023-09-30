import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

class Student {
	String ID, fullName, dateOfBirth, nameOfClass;
	double gpa;
	static int IDnum = 0;

	Student(String fullName, String nameOfClass, String dateOfBirth, double gpa) {
		++Student.IDnum;
		this.ID = "B20DCCN0";
		if (Student.IDnum < 10)
			this.ID += "0";
		this.ID += Integer.toString(Student.IDnum);
		this.fullName = fullName;
		if (dateOfBirth.charAt(1) == '/')
			dateOfBirth = "0" + dateOfBirth;
		if (dateOfBirth.charAt(4) == '/')
			dateOfBirth = dateOfBirth.substring(0, 3) + "0" + dateOfBirth.substring(3);
		this.dateOfBirth = dateOfBirth;
		this.nameOfClass = nameOfClass;
		this.gpa = gpa;
	}

	@Override
	public String toString() {
		return ID + " " + fullName + " " + nameOfClass + " " + dateOfBirth + " " + String.format("%.2f", gpa);
	}
}

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
        try {
			in = new Scanner(new File("SV.in"));
			int n = Integer.parseInt(in.nextLine());
			while (n-- > 0) {
				Student x = new Student(in.nextLine(), in.next(), in.next(), Double.parseDouble(in.nextLine()));
				out.println(x);
			}
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		out.close();
	}
}