class Solution {
public:
    void wiggleSort(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> v (n);
//         sort(nums.begin(), nums.end()); //sort array
        
//         int j=n-1;
//         for(int i=1; i<n; i+=2)  //filling odd places with max elements
//         {
//             v[i]= nums[j];
//             j--;
//         }
        
//         for(int i=0; i<n; i+=2) //filling even places
//         {
//             v[i]=nums[j];
//             j--;
//         }
        
//         for(int i=0; i<n; i++)
//         {
//             nums[i]=v[i];
//         }
        int n=nums.size();
        priority_queue<int> pq (nums.begin(),nums.end());  //coping arr and initializing pq
        
        for(int i=1; i<n; i+=2)
        {
            nums[i] = pq.top();
            pq.pop();
        }
        for(int i=0; i<n; i+=2)
        {
            nums[i] = pq.top();
            pq.pop();
        }
    }
};