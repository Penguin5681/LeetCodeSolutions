class Solution {
    int ans = 0;
    public int sum(int num1, int num2) {
        int[] A = new int[] {num1, num2};
        mergeSort(A, 0, 1);
        return ans;
    }
    public void mergeSort(int[] nums, int l, int r) {
        if (l>=r) return;
        int mid = l+r>>1;
        mergeSort(nums, l, mid); mergeSort(nums, mid+1, r);
        int i = l, j = mid+1, k = 0;
        int[] cur_sorted = new int[r-l+1];
        while (i<=mid && j<=r) {
            if (nums[i] <= nums[j]) {
                cur_sorted[k++] = nums[i++];
            }
            else cur_sorted[k++] = nums[j++];
        }
        while (i<=mid) cur_sorted[k++] = nums[i++];
        while (j<=r) cur_sorted[k++] = nums[j++];
        for (int m = 0; m < r-l+1; m++) {
            nums[m+l] = cur_sorted[m];
            ans+=cur_sorted[m]; 
        }
    }
}
