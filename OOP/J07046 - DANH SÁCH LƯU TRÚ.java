import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class Customer {
    static int numberOfCustomers = 0;
    static SimpleDateFormat df = new SimpleDateFormat("dd/MM/yyyy");
    String id, name, roomId;
    Date arriveDate, leaveDate;
    int numOfStayingDay;

    Customer(String name, String roomId, String arriveDate, String leaveDate) throws ParseException {
        ++numberOfCustomers;
        id = "KH";
        if (numberOfCustomers < 10) id += "0";
        id += numberOfCustomers;
        this.name = name;
        this.roomId = roomId;
        this.arriveDate = df.parse(arriveDate);
        this.leaveDate = df.parse(leaveDate);
        numOfStayingDay = (int)((this.leaveDate.getTime() - this.arriveDate.getTime()) / (1000 * 60 * 60 * 24));
    }

    @Override
    public String toString() {
        return id + " " + name + " " + roomId + " " + numOfStayingDay;
    }
}

public class Main {
    public static PrintWriter out = new PrintWriter(System.out);
    
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner in = new Scanner(new File("KHACH.in"));
        List<Customer> list = new ArrayList<>();
        int n = Integer.parseInt(in.nextLine());
        while (n-- > 0) {
            list.add(new Customer(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(list, (Customer o1, Customer o2) -> Integer.compare(o2.numOfStayingDay, o1.numOfStayingDay));
        for (Customer x: list) out.println(x);
        out.close();
    }
}