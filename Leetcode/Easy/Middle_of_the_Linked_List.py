# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        h1 = head
        count = 0
        while h1:
            count += 1
            h1 = h1.next
            
        for i in range(count/2):
            head = head.next
                
        return head