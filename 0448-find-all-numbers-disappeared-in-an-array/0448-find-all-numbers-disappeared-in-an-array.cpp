class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v)
    {
        vector<int> v1(v.size() + 1);
        vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
            v1[v[i]]++;    
        }
        for(int i=1;i<v1.size();i++)
        {
            if(v1[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};