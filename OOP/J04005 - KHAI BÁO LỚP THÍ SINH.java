import java.io.*;
import java.util.StringTokenizer;
import java.util.Scanner;

class ThiSinh {
	String ten, ns;
	float d1, d2, d3;
	
	ThiSinh(String t, String n, float p1, float p2, float p3) {
		ten = t;
		ns = n;
		d1 = p1;
		d2 = p2;
		d3 = p3;
	}
	
	@Override
	public String toString() {
		return String.format("%s %s %.1f", ten, ns, d1 + d2 + d3);
	}
}

public class Main {
	static class FastReader {
        BufferedReader br;
        StringTokenizer st;
  
        public FastReader()
        {
            br = new BufferedReader(
                new InputStreamReader(System.in));
        }
  
        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
  
        int nextInt() { return Integer.parseInt(next()); }
  
        long nextLong() { return Long.parseLong(next()); }
		
		float nextFloat() { return Float.parseFloat(next()); }
  
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
  
        String nextLine()
        {
            String str = "";
            try {
                if(st.hasMoreTokens()){
                    str = st.nextToken("\n");
                }
                else{
                    str = br.readLine();
                }
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		
		String ten, ns;
		float d1, d2, d3;
		ten = in.nextLine();
		ns = in.nextLine();
		d1 = in.nextFloat();
		d2 = in.nextFloat();
		d3 = in.nextFloat();
		out.print(new ThiSinh(ten, ns, d1, d2, d3));
		
		out.flush();
	}
}