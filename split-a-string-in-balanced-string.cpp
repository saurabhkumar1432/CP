class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0,k=0;
       for(int i=0;i<s.length();i++)
       {
         if(s[i]=='R')
             k++;
           else
               k--;
           if(k==0)
               ans++;
           
            
       }
        return ans;
    }
};
