class Solution {
    public int nthGeekyNumber(int n, int[] geekNum) {
        long ans[]=new long[n];
        int k=geekNum.length;
        long sum=0;
        for(int i=0;i<k;i++)
        {
            ans[i]=geekNum[i];
        }
        if(n<=k)
        return (int)geekNum[n-1];
        for(int i=0;i<k;i++)
        {
            sum+=geekNum[i];
        }
        for(int i=k;i<n;i++)
        {
            ans[i]=sum;
            sum=(sum+ans[i])-ans[i-k];
        }
        return (int)ans[n-1];

    }
}