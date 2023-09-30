import java.io.File;
import java.io.IOException;
import java.util.Collections;
import java.util.Scanner;

class Prime {
    static Boolean[] p = Collections.nCopies(1000001, true).toArray(new Boolean[0]);

    Prime() {
        p[0] = p[1] = false;
        for (int i = 2; i <= 1000; ++i) {
            if (p[i]) {
                for (int j = i * i; j <= 1000000; j += i)
                    p[j] = false;
            }
        }
    }

    static boolean checkPrime(Integer n) {
        return p[n];
    }
}

class Pair<K, V> {
    private K key;
    private V value;
    public static Prime pr = new Prime();

    Pair(K key, V value) {
        this.key = key;
        this.value = value;
    }

    public boolean isPrime() {
        return Prime.checkPrime((Integer) key) && Prime.checkPrime((Integer) value);
    }

    @Override
    public String toString() {
        return key + " " + value;
    }
}

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            boolean check = false;
            for(int i = 2; i <= 2*Math.sqrt(n); i++){
                Pair<Integer, Integer> p = new Pair<>(i, n-i);
                if(p.isPrime()){
                    System.out.println(p);
                    check = true;
                    break;
                }
            }
            if(!check) System.out.println(-1);
        }
    }
}