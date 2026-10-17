class Solution {
    public int leastAvg(int[] nums, int k) {
          int i,sum=0,minSum=Integer.MAX_VALUE,l=0,r;
           for(i=0;i<k;i++)
           {
              sum+=nums[i];
           }
           int index=0;
           minSum=Math.min(sum,minSum);
           for(r=k;r<nums.length;r++)
           {
             sum=sum-nums[l]+nums[r];
             l++;
             if(sum<minSum)
             {
             minSum=sum;
             index=l;
             }

           }

           return index+1;
         }

};