class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        set={}
        for i in range(len(nums)):
            if nums[i] in set:
                return True
            set[nums[i]]=1
        return False
        