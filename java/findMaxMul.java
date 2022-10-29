public class findMaxMul {
    public static void main(String[] args) {
        int[] nums = {9,1,5,6,7,2};
        sort(nums);
        int result =  maxMul(nums);
        System.out.println(result);
    }
    static void sort(int[] nums){
        for(int i = 0; i < nums.length-1; i++){
            for(int j = i+1; j>0; j--){
                if(nums[j] < nums[j-1]){
                    swap(nums, j, j-1);
                }
                else{
                    break;
                }
            }
        }
    }

    static int maxMul(int[] nums){
        int l = nums.length-1;
        int firstMul = nums[l]*nums[l-1]*nums[l-2];
        int secondMul = nums[0]*nums[1]*nums[2];
        int thirdMul = nums[0]*nums[l]*nums[l-1];
        int fourthMul = nums[0]*nums[1]*nums[l];
        int max = Math.max(Math.max(firstMul,secondMul),Math.max(thirdMul,fourthMul));

        // if(minMul < 0){
        //     minMul = (-1)*minMul;
        // }
        // if(maxNum >= minMul){
        //     return maxNum;
        // }
        // else{
        //     return minMul;
        // }
        return max;
    }

    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
