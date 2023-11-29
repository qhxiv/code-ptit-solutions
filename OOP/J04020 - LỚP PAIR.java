import java.util.*;

class Pair<T, V> {
    T first;
    V second;

    boolean isPrime(int a) {
        for (int i = 2; i <= Math.sqrt(a); ++i)
            if (a % i == 0) return false;
        return a >= 2;
    }

    Pair(T a, V b) {
        first = a;
        second = b;
    }

    boolean isPrime() {
        return isPrime((Integer)first) && isPrime((Integer)second);
    }

    public String toString() {
        return first + " " + second;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
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