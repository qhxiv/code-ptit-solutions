import java.io.*;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) {
        HashMap<String, String> subjects = new HashMap<>();
        HashMap<String, String> names = new HashMap<>();
        HashMap<String, ArrayList<String>> res = new HashMap<>();

        int n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            subjects.put(in.next(), in.nextLine().trim());
        }
        
        n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            names.put(in.next(), in.nextLine().trim());
        }

        n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            String nameID = in.next();
            String tmpStr = in.nextLine().trim();

            ArrayList<String> tmp = res.get(nameID) == null ? new ArrayList<>() : res.get(nameID);
            tmp.add(tmpStr);
            res.put(nameID, tmp);
        }
        
        String s = in.next();
        out.printf("Giang vien: %s\n", names.get(s));
        double totalHour = 0;
        for (String x : res.get(s)) {
            String[] arr = x.split("\\s+");
            String subjectID = arr[0];
            String hour = arr[1];

            out.printf("%s %s\n", subjects.get(subjectID), hour);
            totalHour += Double.parseDouble(hour);
        }
        out.printf("Tong: %.2f", totalHour);

        out.close();
    }
}