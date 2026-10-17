class Solution 
{
    public long maximumSubarraySum(int[] nums, int k) 
    {
        HashMap<Integer,Integer> map=new HashMap<>();
        int n=nums.length;
        long sum=0,maxSum=0;
        for(int i=0;i<k;i++)
        {
           map.put(nums[i],map.getOrDefault(nums[i],0)+1);
           sum+=nums[i];
        }
        if(map.size()==k)
        maxSum=sum;
        for(int i=k;i<n;i++)
        {
            int v=map.get(nums[i-k]);
             sum-=nums[i-k];
            if(v==1)
            {
            map.remove(nums[i-k]);
            }
            else
            map.put(nums[i-k],v-1);
         
           map.put(nums[i],map.getOrDefault(nums[i],0)+1);
           sum+=nums[i];
           if(map.size()==k)
           maxSum=Math.max(sum,maxSum);
        }
        return maxSum;
    }
}