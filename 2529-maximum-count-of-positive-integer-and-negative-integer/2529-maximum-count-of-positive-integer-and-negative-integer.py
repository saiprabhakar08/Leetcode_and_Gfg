class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        # for i in range(0,len(nums)):
        #     if(nums[i]==0):
        #         nums.remove(0)

        s=0
        e=len(nums)-1
        m=(s+e)//2
        i=1
        p=0
        n=0
        if(nums[m]>0):
            p=e-m
            while(True):
                if((nums[m]-i)>0):
                    p+=1
                    i=i+1
                else:
                    break
                
        else:
            for i in range(m,0,-1):
                n+=1
            while(True):
                if(nums[m]-i<0 and (m-i)!=s):
                    n+=1
                    i=i+1
                else:
                    break
        if(p>=n):
            return p
        else:
            return n


        