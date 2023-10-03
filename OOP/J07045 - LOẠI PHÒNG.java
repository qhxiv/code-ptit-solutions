import java.io.*;
import java.util.*;

class LoaiPhong implements Comparable<LoaiPhong> {
	String id, ten, dgn, ppv;
	
	LoaiPhong(String s) {
		String[] arr = s.trim().split("\\s+");
		id = arr[0];
		ten = arr[1];
		dgn = arr[2];
		ppv = arr[3];
	}

	@Override
	public String toString() {
		return id + " " + ten + " " + dgn + " " + ppv;
	}

	@Override
	public int compareTo(LoaiPhong o) {
		return ten.compareTo(o.ten);
	}

	
}

public class Main {
	public static Scanner in = new Scanner(System.in);
	public static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
}