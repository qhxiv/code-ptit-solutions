import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        String s = in.next();
        Stack<Character> st = new Stack<>();
        st.add(s.charAt(0));
        for (int i = 1; i < s.length(); ++i) {
            char x = s.charAt(i);
            while (!st.empty() && x > st.peek())
                st.pop();
            st.add(x);
        }
        for (char x : st) out.print(x);
        out.close();
    }
}