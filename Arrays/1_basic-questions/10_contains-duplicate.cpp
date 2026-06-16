class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i:nums)
        {
            um[i]++;
            if(um[i]==2)
            {
                return true;
            }
        }
        return false;
    }
};