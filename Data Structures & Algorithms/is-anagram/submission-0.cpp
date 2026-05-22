class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ch;
        if(s.length()>t.length()||s.length()<t.length() ){
           return false;
        }
        for(char c : s){
            ch[c]++;
        }
        for(char c: t){
            ch[c]--;
        }
        for(auto it:ch){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};
