class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int y: nums)
        {
            x=x^y;
        }
        if(x!=NULL)
        {
           return x; 
        }
        return NULL;
    }
};