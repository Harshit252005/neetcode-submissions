class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int freq[128]= {0};
        int l =0;
        int max_len =0;
        int max_freq = 0;
        for(int r = 0; r<s.length(); r++){
            //move the r forward and update the max_freq
            freq[s[r]]++;
            max_freq= max(max_freq, freq[s[r]]);

            //braking loop condition
            while((r-l+1)-max_freq>k){
                //move the l forward
                freq[s[l]]--;
                l++;

            }
            //UPDATE THE NEW MAX_LEN
            max_len = max(max_len, r-l+1);
        }

        return max_len;
    }
};
