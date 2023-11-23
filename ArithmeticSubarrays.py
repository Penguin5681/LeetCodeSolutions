# 1630. Arithmetic Subarrays

class Solution(object):
    def checkArithmeticSubarrays(self, nums, l, r):
        result = []
        for i in range(len(l)):
            subarray = sorted(nums[l[i]: r[i] + 1])
            difference = subarray[1] - subarray[0]
            is_arithmetic = all(subarray[j] - subarray[j - 1] == difference for j in range(2, len(subarray)))
            result.append(is_arithmetic)

        return result
        