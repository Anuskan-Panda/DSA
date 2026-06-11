class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(x!=nums[i])
            {
                return x;
            }
            x++;
        }
          return x;
    }
};