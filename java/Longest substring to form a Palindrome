class Solution:
    def longestSubstring(self, s):
        d = {}
        d[0] =  -1
        x=ans = 0
        for i in range(len(s)):
            x = x ^ (1 << (ord(s[i])-ord('a')))
            if x in d:
                ans = max(ans,i-d[x])
            else:
                d[x] = i
            for j in range(0,26):
                m = x ^ (1<<j)
                if m in d:
                    ans = max(ans,i-d[m])
        return ans
