import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
        try {
			Scanner in = new Scanner(new File("DATA.in"));
			while (in.hasNextLine()) {
				out.println(in.nextLine());
			}
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		out.flush();
	}
}