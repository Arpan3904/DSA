class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxNum=0;
        for(int num:nums)
        {
            if(num==1)
            {
                count++;
                maxNum=max(maxNum,count);
            }
            else
            {
                count=0;
            }
        }
        return maxNum;
    }
};