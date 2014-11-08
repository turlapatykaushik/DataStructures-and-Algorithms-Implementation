""" Binary Search Tree
Methods - find_element(value), get_max(), get_min(), successor(value),
          insert, delete, values() """

class Node(object):
    def __init__(self, value):
        self.right = None
        self.left = None
        self.parent = None
        self.value = value

    def __repr__(self):
        return "Node with value - %s" % self.value


class BinarySearchTree(object):
    def __init__(self):
        self.root = None
        self.len = 0

    def __len__(self):
       
    def is_empty(self):


    def _inorder(self, node, values):
        

    def _preorder(self, node, values):
        

    def _postorder(self, node, values):
        
            
    def values(self, reverse = False, order="in"):
        

    def _search(self, root, value):
        

    def find_element(self, value):
        

    def _extremes(self, root, find_min = True):
        

    def get_min(self):
        """ returns the element with the minimum value """
        

    def get_max(self):
        """ returns the element with the maximum value """
        
    def successor(self, value):
        """ returns the successor of the element with value - value"""
       

    def insert(self, value):
       
    
    def delete(self, value):
        """ deletes a node from tree with value - value """
       
