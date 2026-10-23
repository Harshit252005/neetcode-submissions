class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int freq[128]= {0};
        int l =0;
        int max_freq = 0;
        int max_len =0;

        for(int r =0; r<s.length(); r++){


            freq[s[r]]++;
            //update the max_freq
            max_freq= max(max_freq,freq[s[r]]);

            // brake condition
            while((r-l+1)-max_freq > k){
                //the frame is broken therefore move l forward
                freq[s[l]]--;
                l++;

            }

            max_len= max(max_len, r-l+1);
        }

        return max_len;
    }
};
