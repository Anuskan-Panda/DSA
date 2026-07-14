class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        vector<int> ans(accounts.size());
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[0].size();j++)
            {
              sum+=accounts[i][j];
            }
            ans[i]=sum;
        }

        int maxi=ans[0];
        for(int i=0;i<ans.size();i++)
        {
            maxi=max(ans[i],maxi);
        }
        return maxi;
    }
};