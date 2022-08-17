class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        
        unordered_set<string> s;
        
        for(int i=0; i<words.size(); i++)
        {
            string str="";
            
            for(int j=0; j<words[i].length(); j++)
            {
                str = str + v[words[i][j] - 'a'];
            }
            s.insert(str);
        }
        for(auto val: s)
            cout<<val<<" ";
        
        
        return s.size();
    }
};