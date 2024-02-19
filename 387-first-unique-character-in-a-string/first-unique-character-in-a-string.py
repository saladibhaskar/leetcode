class Solution:
    def firstUniqChar(self, s: str) -> int:
        d={}
        for i in s:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        for i in d:
            if d[i]==1:
                return s.index(i)
        else:
            return -1