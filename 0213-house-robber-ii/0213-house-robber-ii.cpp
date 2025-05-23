class Solution {
public:
    int rob(vector<int>& nums) {
     if(nums.size() == 1) return nums[0];

     return max(getmax(nums,0,nums.size()-2) , getmax(nums,1,nums.size()-1));

    }

private:
    int getmax(vector<int>& nums, int start, int end){
int maxRob = 0;
int prevRob = 0;

for(int i=start ;i<=end;i++){
    int temp = max(maxRob , prevRob + nums[i]);
    prevRob = maxRob;
    maxRob = temp;
}
return maxRob;
    }
};