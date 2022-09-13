int search(vector<int> & nums, int target, int t)
{
        int start =0;
        int end = nums.size()-1;
        int res = -1;
    
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if(nums[mid]==target)
            {
                res = mid;
                if(t==1)       //first occurance
                    end = mid-1;
                
                else if(t==2)  //last 
                    start = mid+1;
                
            }
            else if(nums[mid]<target)
                start=mid+1;
            else
                end = mid-1;
        }
    return res;
}


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {search(nums, target, 1), search(nums, target, 2)};
    }
};