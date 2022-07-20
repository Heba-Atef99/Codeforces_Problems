class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        ## My Solution
        for c in ransomNote:
            if c in magazine:
                magazine = magazine.replace(c,"",1)
            else:
                return False
        
        return True

        ## Other Solution
        '''
        if len(magazine) < len(ransomNote):
            return False

        ran_dict = defaultdict(int)

        for c in ransomNote:
            ran_dict[i] += 1
        
        for c in magazine:
            if ran_dict[i] > 0:
                ran_dict -= 1
        
        return sum(ran_dict.values()) == 0
        '''
