import java.io.*;
import java.util.*;

class Name implements Comparable<Name> {
    String firstName, middleName, lastName, fullName;
    
    Name(String name) {
        fullName = "";
        for (String x: name.trim().split("\\s+"))
            fullName += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        fullName = fullName.trim();
        
        String[] arr = fullName.split("\\s+");
        firstName = arr[arr.length - 1];
        lastName = arr[0];
        middleName = "";
        for (int i = 1; i < arr.length - 1; ++i) {
            middleName += arr[i] + " ";
        }
        middleName = middleName.trim();
    }

    @Override
    public int compareTo(Name o) {
        if (firstName.equals(o.firstName)) {
            if (lastName.equals(o.lastName))
                return middleName.compareTo(o.middleName);
            return lastName.compareTo(o.lastName);
        }
        return firstName.compareTo(o.firstName);
    }

    @Override
    public String toString() {
        return fullName;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("DANHSACH.in"));
        List<Name> list = new ArrayList<>();
        try {
            while (true) {
                list.add(new Name(in.nextLine()));
            }
        } catch (Exception e) {}
        Collections.sort(list);
        for (Name x: list) out.println(x);
        out.close();
    }
}