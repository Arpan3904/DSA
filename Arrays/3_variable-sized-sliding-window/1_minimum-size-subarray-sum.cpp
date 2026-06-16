class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(), windowSum=0, ans=n+1, left=0;
        for(int right=0;right<n;right++)
        {
            windowSum+=nums[right];
            while(windowSum>=target)
            {
                ans = min(ans, right-left+1);
                windowSum-=nums[left++];
            }
        }
        return ans==(n+1)?0:ans;
    }
};