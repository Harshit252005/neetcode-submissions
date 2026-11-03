class Solution {
public:
    int lengthOfLongestSubstring(string s) {


        int freq[128] = {0};
        int max_len = 0;
        int l = 0;

        for(int r = 0; r<s.size(); r++){


            //Braking loop condition
            while(freq[s[r]]>0){
                freq[s[l]]--;
                l++;
            }

            //increment the r pointer too
            freq[s[r]]++;

            //update the max_Len
            max_len= max(max_len , r-l+1);
        }

        return max_len;
    }
};
