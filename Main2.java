import java.util.Scanner;
public class Main2
{
     public static void main( String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter no. to calculate factorial");
        int a= sc.nextInt();
        int fact=1;
        for (int i = 2; i <=a; i++) {
                fact = fact*i;
            }
        System.out.println(fact);
    }
}





 // if(myNum[i]== 10){
            //     for ( ; i < myNum.length; i++)
            //          if(myNum[i]== 20){
            //             System.out.println("Yes");
            //             return ;
            //       
//        int[] myNum = {10, 20, 30, 40};
// System.out.println("minutes: " + b);
// System.out.println("seconds: " + a);
//    System.out.println("enter timr in seconds: ");
// System.out.println("enter float no. 2");
        //  float b =a/3600;
        //  a = a%3600;
        // System.out.println("time :: \nhour: " + b);
        // b =a/60;
        // a = a%60;