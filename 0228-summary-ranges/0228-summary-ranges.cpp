class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if (nums.empty()) 
        return result;

        int a = nums[0];
        for (int i = 1; i <= nums.size(); ++i) {
            if (i < nums.size() && nums[i] == nums[i-1] + 1)
                continue;
            if (a == nums[i-1]) {
                result.push_back(to_string(a));
            } else {
                result.push_back(to_string(a) + "->" + to_string(nums[i-1]));
            }
            if (i < nums.size()) {
                a = nums[i];
            }
        }
        return result;
    }
};