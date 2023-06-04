class Solution {
public:
    vector<int> intersect(vector<int>& v, vector<int>& v1)
    {
        unordered_map<int,int> mp;
        unordered_map<int,int> mp1;
        
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }
        for(int i=0;i<v1.size();i++)
        {
            mp1[v1[i]]++;
        }
        vector<int> ans;
        for(auto i:mp)
        {
            if(mp1[i.first])
            {
                for(int j=0;j<min(i.second,mp1[i.first]);j++)
                {
                    ans.push_back(i.first);
                }
            }
        }
        return ans;
    }
};