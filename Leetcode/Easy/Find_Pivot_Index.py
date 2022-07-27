class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 1:
            return 0
        
        sums = []
        for i, n in enumerate(nums):
            if i > 0:
                sums.append(sums[-1] + nums[i])
            else:
                sums.append(nums[0])
                
        left_sum = 0
        right_sum = 0
        for i in range(len(nums)):
            left_sum = sums[i] - nums[i]
            right_sum = sums[-1] - sums[i]
            if left_sum == right_sum:
                return i
        
        return -1
        