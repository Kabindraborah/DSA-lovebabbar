class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>ump;
        for(int i = 0;i<arr.size();i++)
            ump[arr[i]]++;
        unordered_map<int,int>::iterator it=ump.begin();
        unordered_map<int,int>::iterator it1=ump.begin();
        // int y=it->second;
        while(it!=ump.end())
        {
            it1=it;
            it1++;
            while(it1!=ump.end())
            {
                if(it->second==it1->second)
                return false;
                it1++;
            }
            it++;
        }
        return true;
    }
};