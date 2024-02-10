class Solution:
    def countSubstrings(self, s: str) -> int:
        l=0
        for i in range(len(s)):
            a=""
            a+=s[i]
            l+=1
            for j in range(i+1,len(s)):
                a+=s[j]
                if a==a[::-1]:
                    l+=1
        return l