# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
from os import preadv


class Solution(object):
    def __init__(self):
        self.h_r = 0
        
    def check_symmetry(self, h_l, count, i):
        if i == (count/2) - 1:
            self.h_r = h_l.next if (count%2==0) else h_l.next.next  
            return h_l.val == self.h_r.val
        

        check = self.check_symmetry(h_l.next, count, i+1)
        self.h_r = self.h_r.next
        return check and h_l.val == self.h_r.val
        
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        ## My Solution
        h_l = head
        count = 0
        while head:
            count += 1
            head = head.next
            
        if count == 1:
            return True
                        
        return self.check_symmetry(h_l, count, 0)

        ## Other Solution
        '''
        fast = head
        slow = head

        # find middle(slow)
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
        
        # reverse second half
        prev = None
        while slow:
            temp = slow.next
            slow.next = prev
            prev = slow 
            slow = temp

        # check palindrome
        left, right = head, prev
        while right:
            if left.val != right.val:
                return false  
            
            left = left.next
            right = right.next
        
        return True
        '''