class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len=nums.size();
        vector<int> ans(len);
        int i=0,j=len-1;
        int k=len-1;
        while(i<=j)
        {
            if(abs(nums[i])>abs(nums[j]))
            {
              ans[k]=nums[i]*nums[i];
              i++;
            }
            else
            {
                ans[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return ans;
    }
};