import java.io.*;
import java.util.*;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) {
		HashSet<Character> se = new HashSet<>();
		se.add('.');
		se.add('!');
		se.add('?');
		try {
			while (true) {
				String s = in.nextLine();
				char c = s.charAt(s.length() - 1);
				if (se.contains(c)) s = s.substring(0, s.length() - 1);
				else c = '.';

				String[] arr = s.trim().split("\\s+");
				out.print(Character.toUpperCase(arr[0].charAt(0)) + arr[0].substring(1).toLowerCase() + " ");
				for (int i = 1; i < arr.length; ++i) {
					out.print(arr[i].toLowerCase());
					if (i < arr.length - 1) out.print(" ");
				}
				out.println(c);
			}
		} catch (Exception e) {}
		out.close();
	}
}