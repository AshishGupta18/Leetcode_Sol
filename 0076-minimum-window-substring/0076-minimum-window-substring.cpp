class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> FreqT;
        int left = 0, minL = INT_MAX, ansLeft = 0;
        int count = t.length();

        for(char ch:t)
             FreqT[ch]++;

        for(int right = 0; right < s.length(); right++){
            if(FreqT[s[right]] > 0) count--;

            FreqT[s[right]]--;

            while(count == 0){
                if((right - left + 1) < minL){
                    minL = right - left + 1;
                    ansLeft = left;
                }

                
                FreqT[s[left]]++;
                if(FreqT[s[left]] > 0) count++;

                left++;
            }
        }

        return minL == INT_MAX ? "" : s.substr(ansLeft, minL);
    }
};