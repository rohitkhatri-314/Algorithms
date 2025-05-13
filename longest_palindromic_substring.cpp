class Solution {
public:
    int helper(string s,int l,int r){
       while(l>=0 && r<s.size() && s[l]==s[r]){
        l--;
        r++;
       }
       return r-l-1;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0 or n==1) return s;
        int start=0,end=0;
        for(int i=0;i<n;i++){
            int odd=helper(s,i,i);
            int even=helper(s,i,i+1);
            int max_len=max(odd,even);

            if(max_len>end-start){
                start=i-(max_len-1)/2;
                end=i+max_len/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};
