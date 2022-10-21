class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        letters_freq = {}
        length = 0
        odd_flag = 0
        
        # Set the freq of each character first
        for c in s:
            if c not in letters_freq:
                letters_freq[c] = 1
            else:
                letters_freq[c] += 1
        
        # for each character that has even number of occurance ,, add it to length
        # otherwise minus one and add the occurance to the length
        # check if there is any char that has occurance of 1 and increment the length by 1
        for c in letters_freq:
            if letters_freq[c] % 2 == 0:
                length += letters_freq[c]
                
            else:
                length +=  letters_freq[c] - 1
                letters_freq[c] -= letters_freq[c] - 1
                if letters_freq[c] == 1 and odd_flag == 0:
                    odd_flag = 1
                    length += 1
        
        #print(letters_freq)
        return length