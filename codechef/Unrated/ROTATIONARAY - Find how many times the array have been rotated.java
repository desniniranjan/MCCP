class Solution {
    public int countRotations(int[] nums) {
        // write your code here 
        int i=1;
        while(i<nums.length){
            if(nums[i]<nums[i-1]) return i;
            i++;
        }
        return 0;
    }
}

