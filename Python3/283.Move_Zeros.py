class Solution(object):
	def moveZeroes(self, nums):
		"""
		:type nums: List[int]
		:rtype: None Do not return anything, modify nums in-place instead.
		"""

	numsLength = len(nums)
	index = range(numsLength) # 0-(numsLength-1)


	if (numsLength > 1):
		cnt = 0
		for i in index:
			if (nums[i] != 0):
				nums[i], nums[i-cnt] = nums[i-cnt], nums[i]
			else:
				cnt += 1 # cnt++
