class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;


        while(l<r){
            //skipping nonalphanumerics for left pointer
            while(l<r && !isalnum(s[l])){
                l++;
            }
            //skiping  nonalphanumeric for right pointer
            while(l<r && !isalnum(s[r])){
                r--;
            }
            //converting to lowercase and comparing
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
