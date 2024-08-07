class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int area;
        int ans = INT_MIN;
        while(i<j)
        {
            if(height[i]<=height[j])
            {
                area = height[i]*(j-i);
                i++;
            }
            else
            {
                area = height[j]*(j-i);
                j--;
            }
            ans = max(ans,area);
        }
        return ans;
    }
};