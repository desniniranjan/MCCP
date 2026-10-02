class Solution {
    public int findMin(int[] arr) {
        // code here
        int i=1;
                while(i<arr.length){
                    if(arr[i]<arr[i-1]) return arr[i];
                    i++;
                }
                return arr[0];
    }
}
