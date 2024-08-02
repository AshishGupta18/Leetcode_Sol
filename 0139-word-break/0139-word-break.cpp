class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool> dp(s.size()+1,false);
    dp[0]=true; 
    unordered_set wordSet(wordDict.begin(),wordDict.end());

    for(int i=1;i<=s.size();i++){
        for(const string& w : wordSet){
          int start = i - w.length();
          if(start>=0 && dp[start]==true && s.substr(start,w.length())== w){
            dp[i]= true;
            break;
          } 
        }
    }
    return dp[s.size()];

    }
};