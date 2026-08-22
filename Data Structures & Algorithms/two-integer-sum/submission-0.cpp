class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> count_nums;
        vector<int> result(2);

        for(int i = 0; i < nums.size(); i++){
            int current_num = nums[i];
            int other_num = target - current_num;

            if(count_nums.count(other_num)){
                result[0] = count_nums[other_num];
                result[1] = i;
                return result;
            }
            else {
                count_nums[current_num] = i;
            }
        }

        return result;
    }
};
