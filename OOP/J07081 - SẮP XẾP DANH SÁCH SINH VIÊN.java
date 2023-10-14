import java.io.*;
import java.util.*;

class Student implements Comparable<Student> {
    String id, firstName, lastName, middleName, fullName, phoneNumber, email;

    public Student(String id, String name, String phoneNumber, String email) {
        this.id = id;
        this.phoneNumber = phoneNumber;
        this.email = email;
        fullName = name;

        String[] arr = name.split("\\s+");
        firstName = arr[arr.length - 1];
        lastName = arr[0];
        for (int i = 0; i < arr.length - 1; ++i) {
            middleName += arr[i];
            if (i < arr.length - 2) middleName += " ";
        }
    }

    @Override
    public int compareTo(Student o) {
        if (!firstName.equals(o.firstName)) return firstName.compareTo(o.firstName);
        if (!lastName.equals(o.lastName)) return lastName.compareTo(o.lastName);
        if (!middleName.equals(o.middleName)) return middleName.compareTo(o.middleName);
        return id.compareTo(o.id);
    }

    @Override
    public String toString() {
        return id + " " + fullName + " " + phoneNumber + " " + email;
    }
}

public class Main {
    public static Scanner in = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException {
        in = new Scanner(new File("SINHVIEN.in"));
        int n = in.nextInt();
        in.nextLine();
        List<Student> list = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            list.add(new Student(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list);
        for (Student x: list) out.println(x);
        out.close();
    }
}