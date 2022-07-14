class Solution(object):
    def romanCharToInt(self, c):
        chars = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        return chars.get(c, 0)
    
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        total = 0
        l = len(s)
        skip_flag = False
        for i, c in enumerate(reversed(s)):
            current_c_int = self.romanCharToInt(c)
            if skip_flag == True:
                skip_flag = False
                continue
                
            if i != l-1:
                next_c_int = self.romanCharToInt(s[l-1-(i+1)])                
                if s[l-1-(i+1)] in {'I', 'X', 'C'} and (current_c_int > next_c_int):
                    total += (current_c_int - next_c_int)
                    skip_flag = True
                    continue
                    
            total += current_c_int
            
        return total