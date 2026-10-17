class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int sum=0,count=0,avg=0,i,r,l=0;
        for(i=0;i<k;i++)
          sum+=arr[i];
        if(sum>=k*threshold)
           count++;
        for(r=k;r<arr.length;r++)
        {
            sum=sum-arr[l]+arr[r];
            if(sum>=k*threshold)
               count++;
            l++;
        }
        return count;
        
    }
}