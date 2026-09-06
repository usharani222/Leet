class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hmap={}
        if len(s)!=len(t):
            return False
        for i in s:
            if i in hmap:
                hmap[i]+=1
            else:
                hmap[i]=1
        for i in t:
            if i in hmap:
                hmap[i]-=1
            else:
                hmap[i]=1
        for i in hmap:
            if hmap[i]!=0:
                return False
        return True        