import java.util.Scanner;
public class Main2
{
     public static void main( String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter timr in seconds: ");
        int a = sc.nextInt();
        // System.out.println("enter float no. 2");
         float b =a/3600;
         a = a%3600;
        System.out.println("time :: \nhour: " + b);
        b =a/60;
        a = a%60;
        System.out.println("minutes: " + b);
        System.out.println("seconds: " + a);
    }
}