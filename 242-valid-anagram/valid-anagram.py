class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d=str(sorted(list(s)))
        f=str(sorted(list(t)))
        if(d==f):
            return True
        else:
            return False
        