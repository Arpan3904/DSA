class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i=0,j=0;
        int m=a.size(),n=b.size();
        vector<int> ans;
        while(i<m && j<n)
        {
            if(i>0 && a[i]==a[i-1])
            {
                i++;
                continue;
            }
            if(j>0 && b[j]==b[j-1])
            {
                j++;
                continue;
            }
            if(a[i]==b[j])
            {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<m)
        {
            if(i==0 || a[i]!=a[i-1])
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<n)
        {
            if(j==0 || b[j]!=b[j-1])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
        return ans;

        // set<int> us;
        // vector<int> ans;
        // for(int i:a)
        // {
        //     us.insert(i);
        // }
        // for(int i:b)
        // {
        //     us.insert(i);
        // }
        // for(int i:us)
        // {
        //     ans.push_back(i);
        // }
        // return ans;
    }
};