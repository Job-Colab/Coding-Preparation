import java.util.Scanner;

public class Lawrance {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- != 0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int temp = n - 1;
            for(int i = 0; i < n / 2; i++) {
                arr[i] *= 10;
                arr[i] += arr[temp--];
            }
            temp = n - 1;
            for(int i = 0; i < n / 2; i++) {
                System.out.print(arr[temp] + " " + (arr[i] - arr[temp--]) / 10 + " ");
            }
            if(n % 2 != 0) {
                System.out.print(arr[temp]);
            }
            System.out.println();
        }
    }
}

