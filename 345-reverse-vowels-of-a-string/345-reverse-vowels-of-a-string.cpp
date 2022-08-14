class Solution {
public:
    string reverseVowels(string s) {
//         int n=s.size();
//         vector<int>v;
//         for(int i=0; i<n; i++)
//         {
//             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
//                s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
//                 v.push_back(i);   //storeindex of vowel in vector
//         }
        
//         for(int start=0, end=v.size()-1; start<end; start++,end--)
//         {
//             swap(s[v[start]], s[v[end]]); //swap char at that index
//         }
//         return s;   //O(n)+O(n)  + some space O(n)
        
        int n=s.size();
        int i=0, j=n-1;
        while(i<j)
        {
            bool flag1=false, flag2=false;
            
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||                                        s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')                
                flag1=true;
            
            if(s[j]=='a' ||s[j]=='e' ||s[j]=='i' ||s[j]=='o' ||s[j]=='u' ||
               s[j]=='A' ||s[j]=='E' ||s[j]=='I' ||s[j]=='O' ||s[j]=='U')
                flag2=true;
            
            if(flag1 && flag2)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            if(!flag1)
                i++;
            
            if(!flag2)
                j--;      
        }
        return s;
    }
};