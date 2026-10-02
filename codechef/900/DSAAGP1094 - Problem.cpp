public static int searchInsertPosition(int[] arr, int n, int k) {
    // Write your code here
    int l=0,h=n-1;
    while(l<=h){
        int m=l+(h-l)/2;
        if(arr[m]==k) return m;
        else if(arr[m]>k) h=m-1;
        else l=m+1;
    }
    return l;
}

