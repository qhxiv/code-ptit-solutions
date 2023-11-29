import java.io.*;
import java.util.*;

class DoiBong {
	String ma, ten;
	long giaVe;

	public DoiBong(String ma, String ten, long giaVe) {
		this.ma = ma;
		this.ten = ten;
		this.giaVe = giaVe;
	}
}

class TranDau implements Comparable<TranDau> {
	String ma, tenDoi;
	long doanhThu;

	public TranDau(String ma, String tenDoi, long doanhThu) {
		this.ma = ma;
		this.tenDoi = tenDoi;
		this.doanhThu = doanhThu;
	}

	@Override
	public String toString() {
		return ma + " " + tenDoi + " " + doanhThu;
	}

	@Override
	public int compareTo(TranDau o) {
		if (this.doanhThu == o.doanhThu)
			return this.tenDoi.compareTo(o.tenDoi);
		return -Long.compare(this.doanhThu, o.doanhThu);
	}
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        int n = Integer.parseInt(in.nextLine());
		HashMap<String, DoiBong> mp = new HashMap<>();
		for (int i = 0; i < n; ++i) {
			String id = in.nextLine();
			String name = in.nextLine();
			long price = Long.parseLong(in.nextLine());
			mp.put(id, new DoiBong(id, name, price));
		}
        n = Integer.parseInt(in.nextLine());
		List<TranDau> l = new ArrayList<>();
		for (int i = 0; i < n; ++i) {
			String id = in.next();
			DoiBong x = mp.get(id.substring(1, 3));
			long ppl = in.nextLong();
			l.add(new TranDau(id, x.ten, x.giaVe * ppl));
		}
		Collections.sort(l);
		for (TranDau x : l) {
			out.println(x);
		}
        out.close();
    }
}