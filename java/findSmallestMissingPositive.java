public class findSmallestMissingPositive {
    public static void main(String[] args) {
        int[] arr = {3,4,-1,1,2,6,4,7};
        System.out.println(Missing(arr));
    }
    static int Missing(int[] arr){
        int i = 0;
        while (i < arr.length){
            int correct = arr[i] - 1;
            if (arr[i] > 0 && arr[i] <= arr.length && arr[i] != arr[correct]){
                swap(arr, i , correct);
            }
            else {
                i++;
            }
        }

        // search for the first missing number
        for (int index = 0; index < arr.length; index++) {
            if(arr[index] != index + 1){
                return index + 1;
            }
        }
        return arr.length + 1;
    }
    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
