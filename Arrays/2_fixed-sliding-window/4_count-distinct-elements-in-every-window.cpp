class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        vector<int> ans;
        int n=arr.size();
        unordered_map<int,int> us;
        for(int i=0;i<k;i++)
        {
            us[arr[i]]++;
        }
        ans.push_back(us.size());
        for(int i=1;i<n-k+1;i++)
        {
            us[arr[i-1]]--;
            if(us[arr[i-1]]==0)
            {
                us.erase(arr[i-1]);
            }
            us[arr[i+k-1]]++;
            ans.push_back(us.size());
        }
        return ans;
    }
};