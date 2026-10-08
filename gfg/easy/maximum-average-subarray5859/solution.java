class Solution {
    public int findMaxAverage(List<Integer> arr, int k) {
        // code here
        double s=0;
        for(int i = 0 ; i<k;i++){
            s+=arr.get(i);
        }
        double max=s;int ind=0;
        for(int i = k;i<arr.size();i++){
            s-=arr.get(i-k);
            s+=arr.get(i);
            if(max<s){
                max=s;
                ind=i-k+1;
            } 
        }
        return ind;
    }
}