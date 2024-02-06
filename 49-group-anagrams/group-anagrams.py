class Solution(object):
    def groupAnagrams(self, strs):
        d={}
        for i in strs:
            s= ''.join(sorted(i))
            if s in d:
                d[s].append(i)
            else: 
                d[s]=[i]
        return list(d.values())