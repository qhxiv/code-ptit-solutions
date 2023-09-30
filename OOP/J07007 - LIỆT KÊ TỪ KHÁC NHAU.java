import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;
import java.util.TreeSet;

class WordSet {
	Scanner in;
	
	WordSet(String path) {
		try {
			in = new Scanner(new File(path));
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	public String toString() {
		TreeSet<String> se = new TreeSet<>();
		while (in.hasNext()) {
			se.add(in.next().toLowerCase());
		}
		String res = "";
		for (String x : se) {
			res += x + "\n";
		}
		return res;
	}
}

public class Main {
	public static void main(String[] args) throws IOException {
        WordSet ws = new WordSet("VANBAN.in");
        System.out.println(ws);
    }
}