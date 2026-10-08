class Solution {
    public int findMin(int[] nums) {
        int i=1;
        while(i<nums.length){
            if(nums[i]<nums[i-1]) return nums[i];
            i++;
        }
        return nums[0];
    }
}