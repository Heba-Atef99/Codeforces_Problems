# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    tree_dict = {}
    def levelOrder(self, root, level = 0):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        ## BFS Solution
        tree_traverse = []
        queue = collections.deque()
        queue.append(root)
        
        while queue:
            level = []
            q_len = len(queue)
            for i in range(q_len):
                node = queue.popleft()
                if node:
                    level.append(node.val)
                    queue.append(node.left)
                    queue.append(node.right)
                
            if level:
                tree_traverse.append(level)
        
        return tree_traverse
        
        ## Other Solution
        '''
        if root == None:
            return
        
        if level == 0:
            self.tree_dict = {}
            self.tree_dict[level] = [root.val]
        
        else:
            if level not in self.tree_dict.keys():
                self.tree_dict[level] = [root.val]
            else:
                self.tree_dict[level].append(root.val)
        
        self.levelOrder(root.left, level+1)
        self.levelOrder(root.right, level+1)
        
        tree_traverse = []
        for l in self.tree_dict.keys():
            tree_traverse.append(self.tree_dict[l])
        
        return tree_traverse
        '''