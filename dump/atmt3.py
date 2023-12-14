class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        initial = 0
        initial2 = 0
        while len(s)>initial and len(t)>initial2:
            if s[initial] == t[initial2]:
                initial += 1
            initial2 += 1
        return True if initial==len(s) else False
