class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        c=s.count('1')
        if(c==1):
            return '0'*(len(s)-1)+'1'
        else:
            return '1'*(c-1)+'0'*(len(s)-c)+'1'