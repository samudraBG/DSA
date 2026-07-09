class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt = 0;

        // Moore's Voting Algorithm
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                el = nums[i];
                cnt = 1;
            }
            else if (el == nums[i]) {
                cnt++;
            }
            else {
                cnt--;
            }
        }

        // Verify the leader
        int count = 0;
        for (int num : nums) {
            if (num == el)
                count++;
        }

        if (count > nums.size() / 2)
            return el;

        return -1;
    }
};