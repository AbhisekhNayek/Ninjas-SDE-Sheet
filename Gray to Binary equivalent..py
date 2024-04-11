class Solution:    
    
    def grayToBinary(self,n):
        nums = str(bin(n))
        ans = nums[2]
        prev = nums[2]
        for i in range(3,len(nums)):
            ans += str(int(nums[i])^int(prev))
            prev = ans[-1]
        return(int(ans,2))
