import java.io.*;
import java.util.*;

class Name implements Comparable<Name> {
    String firstName, lastName, fullName, acronym;

    Name(String name) {
        fullName = name;
        int i = name.length() - 1;
        while (i > 0 && name.charAt(i) != ' ') --i;
        firstName = name.substring(i + 1);
        lastName = name.substring(0, i);
        String[] arr = name.split("\\s+");
        acronym = "";
        for (i = 0; i < arr.length; ++i) {
            acronym += arr[i].charAt(0);
            if (i < arr.length - 1) acronym += '.';
        }
    }

    @Override
    public String toString() {
        return fullName;
    }

    @Override
    public int compareTo(Name o) {
        if (firstName.equals(o.firstName))
            return lastName.compareTo(o.lastName);
        return firstName.compareTo(o.firstName);
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("DANHSACH.in"));
        int n = in.nextInt();
        in.nextLine();
        List<Name> list1 = new ArrayList<>();
        for (int i = 0; i < n; ++i)
            list1.add(new Name(in.nextLine()));
        
        n = in.nextInt();
        for (int i = 0; i < n; ++i) {
            String s = in.next();
            List<Name> list2 = new ArrayList<>();
            for (Name x: list1) {
                if (x.acronym.length() != s.length()) continue;
                int cnt = 0;
                for (int j = 0; j < s.length(); ++j) {
                    if (x.acronym.charAt(j) != s.charAt(j))
                        ++cnt;
                }
                if (cnt == 1) list2.add(x);
            }
            Collections.sort(list2);
            for (Name y: list2) out.println(y);
        }
        out.close();
    }
}