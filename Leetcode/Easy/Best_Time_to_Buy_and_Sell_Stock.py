class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        ### O(n)
        min_price = float('inf')
        max_profit = 0
        
        for i in range(len(prices)):
            # find min price
            if min_price > prices[i]:
                min_price = prices[i]
            
            # find max profit
            if max_profit < prices[i] - min_price:
                max_profit = prices[i] - min_price
        
        return max_profit
        
        
        ### O(n^2) solution Time Limit Exceeded
        '''
        max_profit = 0
        current_profit = 0
        
        for i in range(len(prices)):
            for j in range(i+1, len(prices)):
                current_profit = prices[j] - prices[i]
                
                if prices[i] < prices[j] and max_profit < current_profit:
                    max_profit = current_profit
        
        return max_profit
        '''          
        