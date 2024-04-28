# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        s = 0
        e = n-1
        v = (s+e)/2
        while e >= s:
            is_bad = isBadVersion(v)
            
            if is_bad == False:
                s = v + 1
            
            else:
                e = v - 1
            
            v = (s+e) // 2
        
        return v+1