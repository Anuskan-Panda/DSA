class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int first,second;

        for(int i=0;i,nums.size();i++)
        {
            first=nums[i];
            if(m.find(first)!=m.end())
            {
                return first;
            }
            m[first]=i;
        }
        return -1;
    }
};

/*
unordered_set<int> s;

for(int x : nums)
{
    if(s.find(x) != s.end())
    {
        return x;   // duplicate found
    }

    s.insert(x);
} */