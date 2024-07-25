class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int badekasize = magazine.size();
        int chota =0;
        int bada=0;
        int count = 0;
        while(bada<badekasize){
            if(ransomNote[chota] == magazine[bada]){
                count++;
                chota++;
                bada++;
            }
            else bada++;
        }
        return count == ransomNote.size();
    }
};