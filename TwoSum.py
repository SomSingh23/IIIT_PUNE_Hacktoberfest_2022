#optimised solution to search two numbers in array whose sum is equal to given target
#it has O(n) time complexity

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict={}
        for key,value in enumerate(nums):
            difference=target-value
            if difference in dict:
                return [dict[difference],key]
            difference[value]=key