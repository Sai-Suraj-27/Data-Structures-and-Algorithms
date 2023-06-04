class Solution {
public:
    void merge(vector<int>& v, int m, vector<int>& v1, int n)
    {
        int i=0,j=0;
        vector<int> ans;
        while(i<m and j<n)
        {
            if(v[i] < v1[j])
            {
                ans.push_back(v[i]);
                i++;
            }
            else
            {
                ans.push_back(v1[j]);
                j++;
            }
        }
        while(i<m)
        {
            ans.push_back(v[i]);
            i++;
        }
        while(j<n)
        {
            ans.push_back(v1[j]);
            j++;
        }
        for(i=0;i<n+m;i++)
        {
            v[i] = ans[i];
        }
    }
};