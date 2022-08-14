class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.length();
        r--;
        int ok=1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                /*if(!ok)return false;
                if(s[l]==s[r-1])
                {
                    r--;
                }
                else if(s[l+1]==s[r])
                {
                    l++;
                }
                ok=0;
                continue;*/
                int len=r-l;
                string k=s.substr(l+1,len);
                string k1=k;
                reverse(k1.begin(),k1.end());
                 if(k1==k) return true;
                 

                
                     k=s.substr(l,len);
                 k1=k;
                reverse(k1.begin(),k1.end());
                 if(k1==k) return true;
                
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};