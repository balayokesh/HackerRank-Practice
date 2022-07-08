import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            String s1=sc.next();
            int x1=sc.nextInt();
            String s2=sc.next();
            int x2=sc.nextInt();
            String s3=sc.next();
            int x3=sc.nextInt();
            
            System.out.println("================================");
            
                System.out.printf("%-14s %03d", s1, x1);
                System.out.println("");
                System.out.printf("%-14s %03d", s2, x2);
                System.out.println("");
                System.out.printf("%-14s %03d", s3, x3);
                System.out.println("");
            
            System.out.println("================================");

    }
}
