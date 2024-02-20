# 268. Missing Number
# @param {Integer[]} nums
# @return {Integer}
def missing_number(nums)
  n = nums.length
  expected_sum = n * (n + 1) / 2
  actual_sum = nums.sum

  return expected_sum - actual_sum
end
