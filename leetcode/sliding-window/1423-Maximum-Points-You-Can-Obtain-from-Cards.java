class Solution {
    public int maxScore(int[] nums, int k) {
        int sum=0,n=nums.length,finalResult=0;
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
        }
        int w=n-k;
        if(w==0)
        return sum;
        int csum=0;
        for(int i=0;i<w;i++)
        {
            csum+=nums[i];
        }
        finalResult=csum;
        for(int i=w;i<n;i++)
        {
            csum+=nums[i];
            csum-=nums[i-w];
            finalResult=Math.min(finalResult,csum);
        }
        return sum-finalResult;
    }
}