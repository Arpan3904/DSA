class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxSum=0;
        int l=0,r=height.size()-1;
        while(l<r)
        {
            maxSum= max(maxSum,(r-l)*min(height[l],height[r]));
            if(height[l]<=height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxSum;
    }
};