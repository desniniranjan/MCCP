class Solution {
    public int maxVowels(String s, int k) 
    {
        int count=0,maxCount=Integer.MIN_VALUE;
        int n=s.length();
        char ch[]=s.toCharArray();
        for(int i=0;i<k;i++)
        {
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
              count++;
        }
        maxCount=count;
        for(int i=k;i<n;i++)
        {
            if(ch[i-k]=='a'||ch[i-k]=='e'||ch[i-k]=='i'||ch[i-k]=='o'||ch[i-k]=='u')
            count--;
           if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
              count++;
            maxCount=Math.max(count,maxCount);
        }
        return maxCount;
    }
}