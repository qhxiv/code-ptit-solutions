/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication1;

import java.util.Scanner;

/**
 *
 * @author qhxiv
 */
class NhanVien {
    static Integer num = 0;
    
    String ma, ten, gt, ns, dc, mst, nkhd;
    
    NhanVien(String name, String sex, String dob, String add, String id2, String date2) {
        ma = "000";
        ++num;
        if (num < 10) ma += "0";
        ma += num.toString();
        ten = name;
        gt = sex;
        ns = dob;
        dc = add;
        mst = id2;
        nkhd = date2;
    }
    
    public String toString() {
        return ma + " " + ten + " " + gt + " " + ns + " " + dc + " " + mst + " " + nkhd;
    }
}

public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; ++i) {
            System.out.println(new NhanVien(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
    }
    
}
