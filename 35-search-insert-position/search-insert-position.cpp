class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int low=0,end=nums.size()-1;
        int mid;
        while(low<=end)
        {
            mid=low-(low-end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else 
            {
                 low=mid+1;
            }
            
            
        }
        return low;
    }

};