class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startpos = -1;
        int endpos = -1;
        int n = nums.size();

        for(int i = 0 ;i<n ;i++){
            if(nums[i] == target){
                startpos = i;
                break;
            }

        
        }
        for(int i = n-1 ; i>=0;i--){
            if(nums[i] == target){
                endpos = i;
                break;
            }
        }

       

        return {startpos , endpos};
    }
};