import numpy as np
class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        accounts = np.matrix(accounts)
        accounts = accounts.sum(axis=1)
        return np.max(accounts)