class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int t=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    t++;
                }

            if(i-k>=0){
                if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'){
                    t--;
                }
            }
            if(t>c){
                c=t;
            }
        }

        return c;      
    }
};