class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        
        int ans=0;
        
        for(int i=0; i<=n; i++){
            ans = ans ^ i;
        }


        for(int i=0; i<n; i++){
            

            ans = ans ^ nums[i];
        }
        return ans;

        // int n=nums.size();
        // int total_sum = n*(n+1)/2;
        // int sum = 0;
        // for(int i:nums)
        // {
        //     sum+=i;
        // }
        // return total_sum-sum;
        

    }
};