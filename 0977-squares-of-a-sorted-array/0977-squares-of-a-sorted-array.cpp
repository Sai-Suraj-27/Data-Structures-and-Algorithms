class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> v;
        vector<int> v1;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i] < 0)
            {
                v.push_back(nums[i]*nums[i]);
            }
            else
            {
                v1.push_back(nums[i]*nums[i]);
            }
        }

        int i=v.size()-1,j=0;
        vector<int> ans;
        while(i>=0 and j<v1.size())
        {
            //cout << v[i] << " " << v1[j] << endl;
            if(v[i] < v1[j])
            {
                ans.push_back(v[i]);
                i--;
            }
            else
            {
                ans.push_back(v1[j]);
                j++;
            }
        }
        while(i>=0)
        {
            ans.push_back(v[i]);
            i--;
        }
        while(j<v1.size())
        {
            ans.push_back(v1[j]);
            j++;
        }
        return ans;
    }
};