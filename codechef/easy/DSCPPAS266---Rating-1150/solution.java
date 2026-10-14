public static boolean canReduce(int n, int[] a) {
    //write your code here
    Arrays.sort(a);
    int q=0;
    for(int i=0;i<n-1;i++){
        if(q>1) return false;
        if(a[i+1]-a[i]<1) q++;
    }
    return true;
}