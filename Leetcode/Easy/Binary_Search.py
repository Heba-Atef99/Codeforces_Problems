class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        i = len(nums)/2
        s = 0
        e = len(nums)-1
                
        while e >= s:
            if nums[i] == target:
                return i
            
            elif target > nums[i]:
                s = i+1

            else:
                e = i-1
            
            i = (s+e) // 2
        return -1