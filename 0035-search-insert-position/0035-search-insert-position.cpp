class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0]<target){
                return nums.size();
            }
            else return 0;
        }
        for(int i=1; i<nums.size();i++){
            if(nums[0]>target){
                return 0;
            }
            if(nums[nums.size()-1]<target){
                return nums.size();
            }
            if(nums[i]==target){
                return i;
            }
            else if(nums[i-1]<target && nums[i]>target){
                return i;
                }
        }
        return 0;
    }
};