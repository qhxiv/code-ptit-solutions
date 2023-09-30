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
        
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int[][] a = new int[n][n];
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    a[i][j] = in.nextInt();
                }
            }
            
            for (int i = 0; i < n; ++i) {
                if (i % 2 == 0) {
                    for (int j = 0; j < n; ++j) {
                        System.out.print(a[i][j] + " ");
                    }
                } else {
                    for (int j = n - 1; j >= 0; --j) {
                        System.out.print(a[i][j] + " ");
                    }
                }
            }
            System.out.println();
        }
    }
    
}
