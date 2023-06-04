class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target)
    {
        unordered_map<int,int> mp;
        vector<int> v1;
        for(int i=0;i<v.size();i++)
        {
            int k = target - v[i];
            if(mp.find(k) != mp.end())
            {
                v1.push_back(i);
                v1.push_back(mp[k]);
                break;
            }
            mp[v[i]] = i;
        }
        return v1;
    }
};