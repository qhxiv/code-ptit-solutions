import java.io.*;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws FileNotFoundException {
		in = new Scanner(new File("DATA.in"));
		while (true) {
			String s = in.nextLine().trim();
			if (s.equals("END")) break;
			
			String[] list = s.split("\\s+");
			String tmp = "";
			for (String x : list) {
				tmp += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
			}
			out.println(tmp);
		}
		out.close();
	}
}