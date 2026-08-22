class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_set;
        vector<vector<string>> results;

        for(int i = 0; i < strs.size(); i++){
            string current_word = strs[i];
            string word_set(26, '0');

            for(int j = 0; j < current_word.length(); j++){
                int word_index = current_word[j] - 'a';
                word_set[word_index] = word_set[word_index] + 1;
            }

            anagram_set[word_set].push_back(current_word);
        }

        for(auto it: anagram_set){
            results.push_back(it.second);
        }

        return results;
    }
};
