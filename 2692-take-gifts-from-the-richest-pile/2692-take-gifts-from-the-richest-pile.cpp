class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       while(k--){
        sort(gifts.rbegin(),gifts.rend());
        int piles = gifts[0];
        gifts.erase(gifts.begin());
        gifts.push_back(sqrt(piles));
       }

       long long ans = 0;
       for(auto i : gifts){
            ans+= i;
       }
       return ans;
    }
};