class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        e = ''.join(sorted(s))
        r = ''.join(sorted(t))
        if(e==r):
            return True
        else:
            return False
        