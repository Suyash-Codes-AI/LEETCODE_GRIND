//2SUM LC 1


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // value -> index
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // indices
            }
            num_map[nums[i]] = i;
        }
        return {}; // return empty if no solution
    }
};
