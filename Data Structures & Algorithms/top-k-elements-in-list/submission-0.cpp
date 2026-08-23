class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> num_buckets;
        vector<pair<int, int>> bucket_counts;

        for(int i = 0; i < nums.size(); i++){
            num_buckets[nums[i]]++;
        }

        for(auto it : num_buckets){
            bucket_counts.push_back({it.second, it.first});
        }

        sort(bucket_counts.begin(), bucket_counts.end());

        vector<int> result;
        
        int n = bucket_counts.size();
        for(int i = n - 1; i >= n - k ; i--){
            int bucket_count = bucket_counts[i].second;
            result.push_back(bucket_count);
        }

        return result;
    }
};
