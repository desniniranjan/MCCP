class Solution {
    public int[] findFloorCeil(int[] arr, int k) {
        int n=arr.length;
        int floor=-1,ceil=-1;
        int l=0,h=n-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]<=k){
                floor=arr[m];
                l=m+1;
            }
            else
                h=m-1;
        }
        l=0;
        h=n-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]>=k){
                ceil=arr[m];
                h=m-1;
            }
            else
                l=m+1;
        }
        return new int[]{floor,ceil};
    }
}