class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int len=gain.size();
        vector<int> ans(len+1);
        ans[0]=0;
        for(int i=1;i<=len;i++)
        {
            ans[i]=ans[i-1]+gain[i-1];
        }
         int maxi=ans[0];
         for(int i=1;i<=len;i++)
         {
            maxi=max(ans[i],maxi);
         }
         return maxi;
        
    }
};