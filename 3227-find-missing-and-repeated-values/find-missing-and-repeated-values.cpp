class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& mat) {
        vector<int> ans;
        unordered_set <int> m;
        int row=mat.size();
        int col=mat[0].size();
        int k=1,first;
        int sum=0,qwe=0;
        int repeated=-1;


        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                first=mat[i][j];
                sum+=mat[i][j];
                qwe+=k;
                k++;
                if(m.find(first)!=m.end())
                {
                    repeated=first;
                   ans.push_back(first);
                }
                m.insert(mat[i][j]);

            }
        }
        int missing=qwe-sum+repeated;
        ans.push_back(missing);
        return ans;

    } 
};