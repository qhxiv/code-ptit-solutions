import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);

	static int n;
	static int a[] = new int[100];
	static int b[] = new int[100];
	static ArrayList<String> str = new ArrayList<>();

	static void add() {
		ArrayList<Integer> tmp = new ArrayList<>();
		String s = "";
		for (int i = 1; i <= n; ++i) {
			if (b[i] == 1) {
				if (!tmp.isEmpty() && a[i] < tmp.get(tmp.size() - 1))
					return;
				tmp.add(a[i]);
				s += a[i] + " ";
			}
		}
		if (tmp.size() > 1)
			str.add(s);
	}

	static void Try(int i) {
		for (int j = 0; j <= 1; ++j) {
			b[i] = j;
			if (i == n)
				add();
			else Try(i + 1);
		}
	}
	
	public static void main(String[] args) {
        try {
			in = new Scanner(new File("DAYSO.in"));
			n = in.nextInt();
			for (int i = 1; i <= n; ++i) {
				a[i] = in.nextInt();
			}
			Try(1);
			Collections.sort(str);
			for (String s : str) {
				out.println(s);
			}
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		out.close();
	}
}