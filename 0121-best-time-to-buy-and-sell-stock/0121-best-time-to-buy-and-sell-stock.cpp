class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n = prices.size();
        vector<int> maxi(n);
        int high = prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            maxi[i] = high;
            high = max(high,prices[i]);
        }
        int ans = 0;
        for(int i=0;i<n-1;i++)
        {
            ans = max(ans,maxi[i]-prices[i]);
        }
        return ans;
    }
};