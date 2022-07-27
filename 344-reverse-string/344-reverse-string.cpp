class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int t=n;
        for(int i=0; i<n/2; i++)
        {
            swap(s[i],s[t-1]);
            t--;
        }
    }
};