class Solution {
public:
    bool validMountainArray(vector<int>& arr)
    {
        if(arr.size()<3)
            return false;
        else
        {
            int i=0,j=0;
            bool first = false;
            while(arr[i+1] > arr[i])
            {
                i++;
                first = true;
                if(i==arr.size()-1)
                {
                    j=1;
                    break;
                }
            }
            if(j==1)
            {
                return false;
            }
            else
            {
                while(arr[i+1]<arr[i])
                {
                    i++;
                    if(i==arr.size()-1)
                    {
                        j=1;
                        break;
                    }
                }
                if(j==1 and first)
                    return true;
                else
                    return false;
            }


        }
        
    }
};