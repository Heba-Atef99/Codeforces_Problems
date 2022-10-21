import copy
from socket import SO_RCVLOWAT
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head or not head.next:
            return None
        
        h_copy = copy.deepcopy(head)
        
        while head:
            if head.val == h_copy.val:
                h_copy.val += 1
            else:
                return head
            
            head = head.next
            h_copy = h_copy.next
            
        return None

        ## Another Solution
        ## Floyd's cycle detection algorithm (Tortoise and hare)
        '''
        slow, fast = head, head
        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                break
        
        if not fast.next or not fast.next.next:
            return None

        slow = head
        while slow.next :
            if slow == fast:
                return slow 
            slow = slow.next
            fast = fast.next
        
        return None
        '''