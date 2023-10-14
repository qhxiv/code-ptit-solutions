import java.io.*;
import java.util.*;

public class Main {
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream reader = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> list = (ArrayList<String>)reader.readObject();
        for (String x: list) {
            boolean f = true;
            int res = 0;
            String num = "";
            for (int i = 0; i < x.length(); ++i) {
                char y = x.charAt(i);
                if (y >= '0' && y <= '9') {
                    if (y == '0' && f) continue;
                    if (y != '0') f = false;
                    num += y;
                    res += y - '0';
                }
            }
            out.printf("%s %d\n", num, res);
        }
        out.close();
    }
}