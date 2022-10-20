//A number is said to be Krishnamurthy Number when the sum of factorial of its digits is equal to the number itself.
import java.util.Scanner;
public class KrishnamurthyNumber {
    public static void main(String[] args)
    {
        int n, num, r,
        sumOfFact = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number=");
        n = sc.nextInt();
        num = n;
        while (num > 0)
        {
            r = num % 10;
            int fact=1;
            for(int i=1;i<=r;i++)
            {
                fact=fact*i;
            }
            sumOfFact = sumOfFact+fact;
            num = num / 10;
        }
        if(n==sumOfFact)
        {
            System.out.println("Krishnamurthy Number" );
        }
        else
        {
            System.out.println("Not Krishnamurthy Number" );
        }
    }
}