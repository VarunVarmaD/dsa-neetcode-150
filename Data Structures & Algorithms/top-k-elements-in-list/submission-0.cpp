class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> count;
        map<int, vector<int>> freq;
        for(int i=0; i<nums.size(); i++) {
            count[nums[i]]++;
        }

        for(auto& pair: count) {
            freq[pair.second].push_back(pair.first);
        }

        for(auto it = freq.rbegin(); it != freq.rend(); it++) {
            for(int num : it->second) {
                result.push_back(num);
                k--;
                if(k == 0) return result;
            }
        }
        return result;
    }
};
