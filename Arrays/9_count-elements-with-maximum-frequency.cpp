class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max_freq=0,max_count=0;
        unordered_map<int,int> um;
        for(int i:nums)
        {
            um[i]++;
            if(um[i]>max_freq)
            {
                max_freq = um[i];
            }
        }
        for(auto it:um)
        {
            if(it.second==max_freq)
            {
                max_count+=it.second;
            }
        }
        return max_count;
    }
};