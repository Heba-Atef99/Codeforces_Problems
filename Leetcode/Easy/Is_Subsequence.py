class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """        
        s_i = 0
        for c in t:
            if s_i == len(s):
                break
                
            if c == s[s_i]:
                s_i += 1
        
        return s_i == len(s)