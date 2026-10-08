class Solution {
    public int maxSubarraySum(int[] arr, int k) {
        // Code here
        int s=0;
        for(int i = 0; i< k; i++){
            s+=arr[i];
        }
        int max=s;
        for(int i = k; i<(arr.length); i++){
            s-=arr[i-k];
            s+=arr[i];
            if(max<s) max=s;
        }
        return max;
    }
}