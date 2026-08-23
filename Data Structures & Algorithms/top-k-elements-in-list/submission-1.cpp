class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> buckets;
        priority_queue<pair<int, int>> bucket_counts;

        for(int i = 0; i < nums.size(); i++){
            buckets[nums[i]]++;
        }

        for(auto it : buckets){
            bucket_counts.push({it.second, it.first});
        }

        vector<int> result;

        for(int i = 0; i < k; i++){
            auto top_element = bucket_counts.top();
            result.push_back(top_element.second);
            bucket_counts.pop();
        }

        return result;
    }
};
