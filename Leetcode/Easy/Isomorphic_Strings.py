from stringprep import c22_specials


class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        char_dict = {}
        for i in range(len(s)):
            if not char_dict.has_key(s[i]):
                if t[i] not in char_dict.values():
                    char_dict[s[i]] = t[i]
                else:
                    return False
                    
            else:
                if t[i] != char_dict[s[i]]:
                    return False
        return True
        ## Another Solution
        '''
        mapST, mapTS = {}, {}
        for c1, c2 in zip(s, t):
            if (c1 in mapST and mapST[c1] != c2) or (c2 in mapTS and mapTS[c2] != c1):
                return False
            mapST[c1] = c2
            mapTS[c2] = c1
        return True
        '''        