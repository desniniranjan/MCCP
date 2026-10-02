class Solution {
    ArrayList<Integer> intersection(int[] a, int[] b) {
        // code here
        HashSet<Integer> l1=new HashSet<>();
        HashSet<Integer> l2=new HashSet<>();
        for(int i=0;i<a.length;i++){
            l1.add(a[i]);
        }
         for(int i=0;i<b.length;i++){
            l2.add(b[i]);
        }
        l1.retainAll(l2);
        ArrayList <Integer> c=new ArrayList<>(l1);
         Collections.sort(c);
        return c;
    }
}
