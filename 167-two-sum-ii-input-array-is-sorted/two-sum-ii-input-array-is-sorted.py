class Solution:
    def twoSum(self, a: List[int], target: int) -> List[int]:
        b=[]
        i=0
        j=len(a)-1
        while(i<j):
            if a[i]+a[j]==target:
                b.append(i+1)
                b.append(j+1)
                return b
            if((a[i]+a[j])<target):
                i+=1
            else:
                j-=1
        