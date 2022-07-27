import numpy as np

class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """
        ## wrong ans
        # mat = np.matrix(mat)
        # mat = mat.sum(axis = 1)        
        # mat = np.squeeze(np.asarray(mat))   
        # output = np.argsort(mat)
        # return output[:k]
                 
        output = []
        for i, row in enumerate(mat):
            output.append((sum(row), i))
        output.sort()
        
        return [t[1] for t in output[:k]]
            