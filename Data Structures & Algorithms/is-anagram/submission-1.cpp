class Solution {
public:
    bool isAnagram(string s, string t) {
        int count_s_chars[26] = {0};
        int count_t_chars[26] = {0};

        for(int i = 0; i < s.length(); i++){
            count_s_chars[s[i] - 'a'] += 1;
        }

        for(int i = 0; i < t.length(); i++){
            count_t_chars[t[i] - 'a'] += 1;
        }

        for(int i = 0; i < 26; i++){
            if(count_s_chars[i] != count_t_chars[i]){
                return false;
            }
        }

        return true;
    }
};
