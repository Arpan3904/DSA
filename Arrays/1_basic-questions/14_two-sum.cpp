class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int need = target-nums[i];
            if(um.find(need)!=um.end())
            {
                return {um[need],i};
            }
            um[nums[i]]=i;
        }
        return {};

        // int n=nums.size();
        // vector<int> result(2);
        // for(int i=0;i<(n-1);i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(((nums[i]+nums[j])^target)==0)
        //         {
        //             result[0]=i;
        //             result[1]=j;
        //             break;
        //         }
        //     }
        // }
        // return result;
    }
};