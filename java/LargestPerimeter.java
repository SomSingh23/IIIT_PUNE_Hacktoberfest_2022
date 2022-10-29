import java.util.Arrays;

public class LargestPerimeter {
    public static void main(String[] args) {
        int[] nums = {3,6,2,3};
        sort(nums);
        int[] sorted = nums;
        System.out.println("The sorted array is " + Arrays.toString(sorted));
        System.out.println("The largest perimeter is " + largePar(nums));
    }

    static int largePar(int[] nums){
        sort(nums);
        int side1 = nums[nums.length-1];
        int side2 = nums[nums.length-2];
        int side3 = nums[nums.length-3];

        if(side2 + side3 <= side1){
            return 0;
        }
        return side1+side2+side3;
    }

    static void sort(int[] nums){
        for(int i = 0; i < nums.length-1 ; i++){
            for(int j = i+1; j > 0; j--){
                if(nums[j] < nums[j-1]){
                    swap(nums,j,j-1);
                }
                else{
                    break;
                }
            }
        }
    }

    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
