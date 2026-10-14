import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
            }
            // your code goes here
            Arrays.sort(a);
            int s=0;
            int i=(a.length%2==0)?1:0;
            for(;i<n;i+=2){
                s+=a[i];
            }
            System.out.println(s);
        }
    }
}
