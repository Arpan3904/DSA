class Solution {
public:
    bool checkSame(int a[], int b[])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int pSize=p.size();
        int sSize=s.size();
        if(pSize > sSize)
            return {};
        int freq1[26] = {0};
        int freq2[26] = {0};
        
        vector<int> ans;
        for(int i=0;i<pSize;i++)
        {
            freq2[p[i]-'a']++;
            freq1[s[i]-'a']++;
        }
        if(checkSame(freq1,freq2))
        {
            ans.push_back(0);
        }
        for(int i=pSize;i<sSize;i++)
        {
            freq1[s[i-pSize]-'a']--;
            freq1[s[i]-'a']++;
            if(checkSame(freq1,freq2))
            {
                ans.push_back(i-pSize+1);
            }
        }
        return ans;

        // int n = s.size();
        // int m = p.size();

        // vector<int> ans;

        // if(m > n) return ans;

        // vector<int> freq1(26, 0);
        // vector<int> freq2(26, 0);

        // for(int i = 0; i < m; i++) {
        //     freq1[s[i] - 'a']++;
        //     freq2[p[i] - 'a']++;
        // }

        // if(freq1 == freq2)
        //     ans.push_back(0);

        // for(int i = m; i < n; i++) {

        //     // remove left character
        //     freq1[s[i - m] - 'a']--;

        //     // add new character
        //     freq1[s[i] - 'a']++;

        //     if(freq1 == freq2)
        //         ans.push_back(i - m + 1);
        // }

        // return ans;
    }
};