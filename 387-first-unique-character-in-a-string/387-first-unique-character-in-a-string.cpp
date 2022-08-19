class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        unordered_set<char>v;
        int n=s.size();
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        for(auto val: mp)
        {
            if(val.second==1)
                v.insert(val.first);
        }
        for(int i=0; i<s.size(); i++)
        {
            if(v.find(s[i]) != v.end())
                return i;
        }
        return -1;
    }
};