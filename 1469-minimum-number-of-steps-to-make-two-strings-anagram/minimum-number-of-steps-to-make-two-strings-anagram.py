class Solution:
    def minSteps(self, s: str, t: str) -> int:
        i=0
        while(i<len(s)):
            if(s[i]  in t):
                z=str(s[i])
                t=t.replace(z,"",1)
            i+=1
        return len(t)