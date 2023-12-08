import java.io.*;
import java.util.*;

class d {
	String name, id, stt;
	long gg, tt;

	d(String name, String id, long dg, long sl) {
		this.name = name;
		this.id = id;
		stt = id.substring(1, 4);
		double tmp = 0.5;
		if (id.charAt(id.length() - 1) == '2') tmp = 0.3;
		long to = dg * sl;
		gg = (long) (tmp * to);
		tt = to - gg;
	}

	public String toString() {
		return String.format("%s %s %s %d %d", name, id, stt, gg, tt);
	}
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int T = in.nextInt();
		List<d> list = new ArrayList<>();
        for (int tt = 0; tt < T; ++tt) {
			in.nextLine();
            list.add(new d(in.nextLine(), in.next(), in.nextLong(), in.nextLong()));
        }
		Collections.sort(list, new Comparator<d>(){

			@Override
			public int compare(d o1, d o2) {
				long t1 = Long.parseLong(o1.stt);
				long t2 = Long.parseLong(o2.stt);
				return Long.compare(t1, t2);
			}

		});
		for (d x: list) out.println(x);
        out.close();
    }
}