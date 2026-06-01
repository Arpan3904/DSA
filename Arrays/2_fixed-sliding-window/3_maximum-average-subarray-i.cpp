class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum=0,n=nums.size();
        for(int i=0;i<k;i++)
        {
            windowSum+=nums[i];
        }
        int maxSum=windowSum;
        for(int i=k;i<n;i++)
        {
            windowSum+=nums[i];
            windowSum-=nums[i-k];
            maxSum=max(maxSum,windowSum);
        }
        return (double)maxSum/k;
    }
};