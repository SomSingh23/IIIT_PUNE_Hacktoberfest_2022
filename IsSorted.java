import java.util.Scanner;

public class IsSorted {
    public static boolean checkAscSorted (byte arr[] ) {
        boolean flag = true;
        for (byte i = 0; i < arr.length-1; i++) {
            if (arr[i] > arr[i+1]){
                flag = false;
                break;
            }
        }
        return flag;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        byte size = sc.nextByte();
        byte arr[] = new byte[size];

        // Input
        for (byte i = 0; i < size; i++) {
            System.out.print("Enter number : ");
            arr[i] = sc.nextByte();
        }
        
        boolean result = checkAscSorted(arr);
        System.out.println( result );
        sc.close();
    }
}
