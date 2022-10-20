class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums == null) {
            throw new IllegalArgumentException("Input array is null");
        }

        int len = nums.length;
        if (len <= 2) {
            return len;
        }

        int insertPos = 1;
        for (int i = 2; i < len; i++) {
            if (nums[i] != nums[insertPos - 1]) {
                nums[++insertPos] = nums[i];
            }
        }

        return insertPos + 1;
    }
}
