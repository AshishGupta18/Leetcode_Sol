class Solution {
public:
    int takeCharacters(string s, int k) {
        int n =s.size();
        int l=0,r = 0;
        int ans = n;
        int a=0,b=0,c=0;

        int totalA = 0,totalB = 0,totalC = 0;
        for(char c : s){
            if(c == 'a'){totalA++;}
            else if(c == 'b'){totalB++;}
            else if(c == 'c'){totalC++;}
        }

if(totalA < k || totalB < k || totalC < k){
    return -1;
}
        while(r<n){
            if(s[r] == 'a'){a++;}
            if(s[r] == 'b'){b++;}
            if(s[r] == 'c'){c++;}
            r++;


        while(a>totalA - k || b>totalB - k || c>totalC - k ){
            if(s[l] == 'a'){a--;}
            if(s[l] == 'b'){b--;}
            if(s[l] == 'c'){c--;}
            l++;
        }

        ans = min(ans,n-(r-l));
        }
return ans;
    }  
};