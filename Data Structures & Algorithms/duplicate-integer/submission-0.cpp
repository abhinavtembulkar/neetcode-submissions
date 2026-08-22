#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> count_items;

        for(int i = 0; i < nums.size(); i++){
            int current_element = nums[i];
            
            if(count_items.count(current_element)){
                return true;
            } else {
                count_items[current_element] += 1;
            }
        }

        return false;
    }
};