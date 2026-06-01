class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        unordered_map<int,int> temp;
        for(int i:arr)
        {
            temp[i]++;
        }
        vector<vector<int>> result;
        for(auto &it:temp)
        {
            result.push_back({it.first, it.second});
        }
        return result;
    }
};