import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class KhachHang {
    String ten, sp, nnp, ntp ,ma;
    long tdv, ngayO, thanhTien;
    static int soLuong = 0;

    KhachHang(String ten1,String sp1, String nnp1, String ntp1, long tdv1) throws ParseException {
        ++soLuong;
        ma = "KH";
        if (soLuong < 10) ma += "0";
        ma += soLuong;
        ten = "";
        for (String x: ten1.trim().split("\\s+")) {
            ten += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        }
        sp = sp1.trim();
        nnp = nnp1.trim();
        ntp = ntp1.trim();
        if (nnp.charAt(1) == '/') nnp = "0" + nnp;
        if (nnp.charAt(4) == '/') nnp = nnp.substring(0, 3) + "0" + nnp.substring(3);
        if (ntp.charAt(1) == '/') ntp = "0" + ntp;
        if (ntp.charAt(4) == '/') ntp = ntp.substring(0, 3) + "0" + ntp.substring(3);
        Date a = new SimpleDateFormat("dd/MM/yyy").parse(nnp);
        Date b = new SimpleDateFormat("dd/MM/yyy").parse(ntp);
        ngayO = (b.getTime() - a.getTime()) / (1000 * 3600 * 24) + 1;
        tdv = tdv1;
        long donGia;
        char tmp = sp.charAt(0);
        if (tmp == '1') donGia = 25;
        else if (tmp == '2') donGia = 34;
        else if (tmp == '3') donGia = 50;
        else donGia = 80;
        thanhTien = donGia * ngayO + tdv;
    }

    public String toString() {
        return ma + " " + ten + sp + " " + ngayO + " " + thanhTien;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException, NumberFormatException, ParseException {
        List<KhachHang> list = new ArrayList<>();
        in = new Scanner(new File("KHACHHANG.in"));
        int n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            list.add(new KhachHang(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine())));
        }
        Collections.sort(list, (KhachHang a, KhachHang b) -> Long.compare(b.thanhTien, a.thanhTien));
        for (KhachHang x: list) out.println(x);
        out.close();
    }
}