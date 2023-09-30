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
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), m = 0;
        int[] a = new int[n];
        int[] cnt = new int[201];
        for (int i = 0; i < n; ++i) {
            a[i] = in.nextInt();
            m = Math.max(m, a[i]);
            cnt[a[i]]++;
        }
        
        boolean c = true;
        for (int i = 1; i <= m; ++i) {
            if (cnt[i] == 0) {
                System.out.println(i);
                c = false;
            }
        }
        
        if (c)
            System.out.println("Excellent!");
    }
    
}
