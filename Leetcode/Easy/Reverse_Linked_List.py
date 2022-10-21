# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head or not head.next:
            return head
        
        output = ListNode(val = head.val, next = None)
        while head.next:
            tmp = ListNode(val=output.val, next=output.next)
            output = ListNode(val=head.next.val, next=head.next.next)
            output.next = tmp
            head = head.next

        return output