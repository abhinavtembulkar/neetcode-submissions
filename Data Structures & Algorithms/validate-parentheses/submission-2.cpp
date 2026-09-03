class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for(int i = 0; i < s.length(); i++){
            switch(s[i]){
                case '(':
                case '[':
                case '{':
                    brackets.push(s[i]);
                    break;
                case ')':
                case ']':
                case '}':
                    if (brackets.size() == 0){
                        return false;
                    }
                    else if(s[i] == ')') {
                        if (brackets.top() == '('){
                            brackets.pop();
                        }
                        else {
                            return false;
                        }
                    } 
                    else if(s[i] == ']') {
                        if (brackets.top() == '['){
                            brackets.pop();
                        }
                        else {
                            return false;
                        }
                    } 
                    else if(s[i] == '}') {
                        if (brackets.top() == '{'){
                            brackets.pop();
                        }
                        else {
                            return false;
                        }
                    } 
                    break;
                default:
                    break;
            }
        }

        if(brackets.size() > 0){
            return false;
        }

        return true;
    }
};
