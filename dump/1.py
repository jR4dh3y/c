class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        target = sum(nums) - x
        cur_sum = 0
        max_len = -1
        left = 0
        for right in range(len(nums)):
            cur_sum += nums[right]
            while cur_sum > target and left <= right:
                cur_sum -= nums[left]
                left += 1
            if cur_sum == target:
                max_len = max(max_len, right - left + 1)
        return -1 if max_len == -1 else len(nums) - max_len
