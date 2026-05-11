class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        s="".join(map(str,nums))
        ans=[]

        for c in s:
            ans.append(int(c))

        return ans