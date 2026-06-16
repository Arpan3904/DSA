class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //right rotate
        int n=nums.size();
        k%=n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        // Q: left rotate
        // 1) normal rotate
        // class Solution {
        // public:
        //     void rotateArr(vector<int>& nums, int k) {
        //         int n = nums.size();
        //         k %= n;

        //         reverse(nums.begin(), nums.begin() + k);
        //         reverse(nums.begin() + k, nums.end());
        //         reverse(nums.begin(), nums.end());
        //     }
        // };
        //
        // 2) Change in right
        // class Solution {
        // public:
        //     void rotateArr(vector<int>& nums, int k) {
        //         int n=nums.size();
        //         k%=n;
        //         k=n-k;
        //         reverse(nums.begin(),nums.end());
        //         reverse(nums.begin(),nums.begin()+k);
        //         reverse(nums.begin()+k,nums.end());
        //     }
        // };

    }
};