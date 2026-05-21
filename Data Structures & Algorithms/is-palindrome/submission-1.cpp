class Solution {
public:
    bool isPalindrome(string s) {
        int right=s.size();
        int left=0;
        while(left<right){
            if(!isalnum(s[left])){
                left++;
            }
            else if(!isalnum(s[right])){
                right--;
            }
            else if(tolower(s[right])!=tolower(s[left])){
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};
