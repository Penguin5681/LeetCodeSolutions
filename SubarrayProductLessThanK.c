// 713. Subarray Product Less Than K

int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    if (k <= 1) 
        return 0;
    int count = 0, prod = 1;
    int left = 0;

    for (int right = 0; right < numsSize; ++right) {
        prod *= nums[right];

        while (prod >= k && left <= right) {
            prod /= nums[left++];
        }

        count += right - left + 1;
    }
    return count;
}
