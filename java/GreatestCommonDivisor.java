import java.util.Scanner;

public class GreatestCommonDivisor {
    // GCD or HCF    
    public int greatestCommonDivisor(int a, int b) {
        int counter = 0;

        while (a != b) {
            counter++;
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }  System.out.println(counter); 
        return a;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number : ");
        int a = sc.nextInt();
        System.out.print("Enter Second number : ");
        int b = sc.nextInt();
        
        EightClassEx9 ec9 = new EightClassEx9();
        int GCD = ec9.greatestCommonDivisor(a, b);
        System.out.println(GCD);

        sc.close();
    }
}
