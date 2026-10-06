class Solution {
public:
    bool isValid(string s) {

        stack<char> tube;

        for(int i = 0; i<s.size(); i++){

            if(s[i]=='('){
                tube.push(')');
            }else if(s[i]=='{'){
                tube.push('}');
            }else if(s[i]== '['){
                tube.push(']');
            }

            else{
                if(!tube.empty() && tube.top() == s[i]){
                    tube.pop();
                }else{
                    return false;
                }
            }

        }

        return tube.empty();


    }
};
