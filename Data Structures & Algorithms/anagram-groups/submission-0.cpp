class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anagramMap;

        for(string s : strs){

            //counting the frequency 
            vector<int> count(26,0);
            for(char c : s){
                count[c - 'a']++;
            }
            //converting frequency array to unique string key 

            string key = "";
            for(int i = 0; i < 26; i++){
                key += to_string(count[i]) + "#";
            }

            anagramMap[key].push_back(s);
            }
             //gather the result 
            vector<vector<string>> result;

            for(auto& pair : anagramMap){
                result.push_back(pair.second);

        }
        return result;

    }
};
