# leetcode link :- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
class Solution:
    def removeDuplicates(self, s: str) -> str:
        lis = []
        for i in s:
            if lis and lis[-1] == i:
                lis.pop()
            else:
                lis.append(i)
        return "".join(lis)
        
