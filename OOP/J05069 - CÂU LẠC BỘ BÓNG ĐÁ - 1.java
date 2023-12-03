import java.io.*;
import java.util.*;

class clb {
	String name;
	long price;

	public clb(String name, long price) {
		this.name = name;
		this.price = price;
	}
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
		HashMap<String, clb> mp = new HashMap<>();
        int T = in.nextInt();
        for (int tt = 0; tt < T; ++tt) {
			String id = in.next();
			in.nextLine();
			String name = in.nextLine();
            mp.put(id, new clb(name, in.nextLong()));
        }
		int n = in.nextInt();
		while (n-- > 0) {
			String id = in.next();
			clb x = mp.get(id.substring(1, id.length() - 1));
			out.printf("%s %s %d\n", id, x.name, x.price*in.nextLong());
		}
        out.close();
    }
}