class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int temp=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+temp, s.begin()+i);
                temp = i+1;
            }
        }
        reverse(s.begin()+temp, s.end());
        return s;
    }
};