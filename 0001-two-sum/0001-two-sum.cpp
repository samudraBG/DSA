class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
     {
        unordered_map<int, int> numMap; // Stores {number, index}

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Number needed to reach target

        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Found the pair
        }

        numMap[nums[i]] = i; // Store current number and index
    }

    return {}; // This line is never reached due to problem constraints.
     }
};