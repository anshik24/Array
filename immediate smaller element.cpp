class Solution {
  public:
    string removeChars(string string1, string string2) {
        
        string ans;
        for(int i=0;i<string1.size();i++){
            if(string2.find(string1[i])==string::npos) ans+=string1[i];
        }
        return ans;
    }
};
