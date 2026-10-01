class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      /*   for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
            {
                return {i,j};
            }
        }
    }
    return {};*/
  vector<int> ans;
  int first,second;
  unordered_map<int,int> m;

  for(int i=0;i<nums.size();i++)
  {
     first=nums[i];
     second=target-first;
     if(m.find(second)!=m.end())
     {
        ans.push_back(i);
        ans.push_back(m[second]);
        break;
     }
     m[first]=i;
   }
   return ans;
  }  
};