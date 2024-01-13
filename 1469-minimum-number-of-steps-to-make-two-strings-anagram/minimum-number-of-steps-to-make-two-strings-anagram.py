class Solution:
    def minSteps(self, s: str, t: str) -> int:
       # c=0
        i=0
        while(i<len(s)):
            if(s[i]  in t):
                #print(s[i])
                z=str(s[i])
                t=t.replace(z,"",1)
               # print(t)
               # c+=1
                
            i+=1
        return len(t)