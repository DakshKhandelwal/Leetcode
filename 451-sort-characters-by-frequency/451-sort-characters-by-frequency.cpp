class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        string str="";
        
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        
        for(auto it: mp)
        {
            pq.push({it.second, it.first});
        }
        
        while(!pq.empty())
        {
            int freq=pq.top().first;
            while(freq--)
            {
                str.push_back(pq.top().second);
            }
            pq.pop();
        }
        return str;
    }
};