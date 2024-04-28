# import numpy as np
class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        # accounts = np.matrix(accounts)
        # accounts = accounts.sum(axis=1)
        # return np.max(accounts)
        accounts_sum = map(sum, accounts)
        return max(accounts_sum)