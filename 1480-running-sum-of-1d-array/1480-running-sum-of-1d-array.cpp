class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int> rsum(nums.size());
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            rsum[i]=sum;
        }
        return rsum;
    }
};