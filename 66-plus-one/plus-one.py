class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s=""
        for i in digits:
            s+=str(i)
        a=int(s)+1
        b=str(a)
        c=[]
        for i in b:
            c.append(int(i))
        print(*c)
        return c
        