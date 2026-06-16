class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2,0);
        int n=numbers.size();
        int left=0;
        int sum=numbers[left];
        for(int right=left;right<n;right++)
        {
            sum+=numbers[right];
            while(sum>target)
            {
                sum-=numbers[left];
                left++;
            }
            if(sum==target)
            {
                ans[0]=left;
                ans[1]=right;
                return ans;
            }
        }
        return {};
    }
};