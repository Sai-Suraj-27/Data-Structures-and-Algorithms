class Solution {
public:
    int pivotIndex(vector<int>& v)
    {
        int n = v.size();
        vector<int> lsum(n);
        vector<int> rsum(n);
        
        int sum = v[0];
        for(int i=1;i<n;i++)
        {
            lsum[i] = sum;
            sum += v[i];
        }
        sum = v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rsum[i] = sum;
            sum += v[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(lsum[i]==rsum[i])
                return i;
        }
        return -1;
    }
};