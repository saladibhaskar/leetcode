class Solution:
    def divideArray(self, nums: List[int], k: int) -> List[List[int]]:
        nums.sort()
        li = []
        fi=[]
        for i in range(0, len(nums),3):
            li.append(nums[i:i+3])
        for i in range(len(li)):
            if(li[i][2]-li[i][0]>k):
                return []
        return li