class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int prefix=1;
        for(int i=0;i<nums.size();i++)
        {
           ans[i]=prefix;
           prefix*=nums[i];
        }
        int suffix=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]*=suffix;
            suffix*=nums[i];
        }
        return ans;
    }
};

/* vector<int> nums1(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            int mul=1;
              for(int j=0;j<nums.size();j++)
              {
                
                if(j!=i)
                {
                  mul=mul*nums[j];
                }
                nums1[i]=mul;
              }
        }
        return nums1;*/