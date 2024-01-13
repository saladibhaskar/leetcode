class Solution:
    def maxOperations(self, l: List[int], t: int) -> int:
        d={}
        l.sort()
        c=0
        i=0
        j=len(l)-1
        while(i<j):
            if l[i]+l[j]==t:
                c+=1
                j-=1
                i+=1
            elif l[i]+l[j]<t:
                i+=1
            else:
                j-=1
        return c