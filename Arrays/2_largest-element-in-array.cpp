class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest= arr[0];
        for(int i:arr)
        {
            if(i>largest)
            {
                largest = i;
            }
        }
        return largest;
    }
};
