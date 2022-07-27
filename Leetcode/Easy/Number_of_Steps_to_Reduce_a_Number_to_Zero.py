class Solution(object):
    def numberOfSteps(self, num):
        """
        :type num: int
        :rtype: int
        """
        steps = 0
        while num != 0:
            if num % 2 == 0:
                num = num / 2
            
            else:
                num -= 1
            
            steps += 1
        
        return steps

        ## Another solution
        # return len(bin(num)[2:]) + bin(num).count("1") - 1