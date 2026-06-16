class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<int,int> freq;
        int n=s.size();
        int left=0, ans=-1;
        for(int right=0;right<n;right++)
        {
            freq[s[right]]++;
            while(freq.size()>k)
            {
                freq[s[left]]--;
                
                if(freq[s[left]]==0)
                {
                    freq.erase(s[left]);
                }
                
                left++;
            }
            if(freq.size() == k)
                ans = max(ans,right-left+1);
        }
        return ans;
    }
};