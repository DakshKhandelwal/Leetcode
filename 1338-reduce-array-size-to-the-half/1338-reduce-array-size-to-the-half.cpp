class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        priority_queue<int> pq;
        
        for(auto val: mp)
        {
            pq.push(val.second);
        }
        int temp=0,count=0;
        while(!pq.empty())
        {
            count++;
            temp+=pq.top();
            if(temp>=n/2)
                return count;
            pq.pop();
        }
       return count; 
    }
};