import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws FileNotFoundException {
		in = new Scanner(new File("input.txt"));
		ArrayList<String> list = new ArrayList<>();
		while (in.hasNext()) {
			String s = in.next();
			try {
				Integer.parseInt(s);
			} catch (Exception e) {
				// TODO: handle exception
				list.add(s);
			}
		}
		Collections.sort(list);
		for (String x : list) {
			out.print(x + " ");
		}
		out.close();
	}
}