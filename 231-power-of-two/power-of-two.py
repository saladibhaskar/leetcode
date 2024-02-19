class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        a=bin(n)
        if(n<0):
            return False
        if(a.count('1')==1):
            return True
        return False

        