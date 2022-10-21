"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution(object):
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        if root == None:
            return 
        
        tree_traverse = []
        tree_traverse.append(root.val)
        
        for child in root.children:
            tree_traverse += self.preorder(child)
        
        return tree_traverse