class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long ans=1;
        long cnt=0;
        vector<int> temp(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                cnt++;
                continue; 
            }
            ans *= nums[i]; 
            
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(cnt == 1 && nums[i]==0)
            {
                temp[i]=ans;
               // temp.push_back(ans);
                cout<<temp[i]<<" ";
            }
            else if(cnt == 1 && nums[i]!=0){
                temp[i] = 0;
            }
            else if(cnt>1)
            {
                temp[i]=0;
                cout<<temp[i]<<" ";
            }
            // else if(nums[i]==0)
            // {
            //     temp[i]=0;
            // }
            else
            {
                temp[i]=(int)(ans/nums[i]);
                cout<<temp[i]<<" ";
            }

        }
        return temp;
        
//         int n = nums.size();
//         int l[n],r[n];
//         l[0] = 1;
//         r[n-1] = 1;
        
//         for(int i=1;i<n;i++)
//             l[i] = l[i-1]*nums[i-1];
//         for(int i = n-2;i>=0;i--)
//             r[i] = r[i+1]*nums[i+1];
//         for(int i=0;i<n;i++)
//             nums[i] = l[i]*r[i];
        
//         return nums;
        
    }
};