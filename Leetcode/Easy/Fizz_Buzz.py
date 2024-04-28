class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        output = []
        
        for i in range(n):
            if (i+1)%3 == 0 and (i+1)%5 == 0:
                output.append("FizzBuzz")
                
            elif (i+1)%3 == 0:
                output.append("Fizz")
            
            elif (i+1)%5 == 0:
                output.append("Buzz")
            
            else:
                output.append(str(i+1))
        
        return output
        
        """
        better solution, not mine
        def fizzBuzz(self, n):
            return ['Fizz' * (not i % 3) + 'Buzz' * (not i % 5) or str(i) for i in range(1, n+1)]
        """