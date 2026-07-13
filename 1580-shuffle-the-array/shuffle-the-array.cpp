class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      vector<int> ans(2*n);
      int k=0;
      int i=0,j=n;
      while(j<2*n)
      {
        ans[k]=nums[i];
        k++;i++;
        ans[k]=nums[j];
        k++;j++;
      }
      return ans;
    }
};