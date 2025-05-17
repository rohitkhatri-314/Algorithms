#include <bits/stdc++.h>
using namespace std;

string toHex(int num) {
        if(num==0) return "0";
        string hex="0123456789abcdef";
        string ans="";
        unsigned int nums=num;
        while(nums){
            ans=hex[nums%16] + ans;
            nums/=16;
        }
        return ans;
    }
int main(){
int n=69;
cout<<toHex(n);
return 0;}