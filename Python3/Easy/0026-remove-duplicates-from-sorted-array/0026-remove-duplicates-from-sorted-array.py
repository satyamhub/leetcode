class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        L=[]
        cnt=0
        for i in nums:
            
            if i not in L:
                L.append(i)
                cnt+=1

        for j in range (0, len(L)):
            nums[j]=L[j]


        return cnt

        