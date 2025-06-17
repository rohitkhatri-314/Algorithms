#include <bits/stdc++.h>
using namespace std;

vector<int>nextGreaterElement(vector<int>&nums){
    int n=nums.size();
    vector<int>res(n,-1);
    stack<int>s; //monotonic stack
    for(int i=0;i<n;i++){
        while(!s.empty() && nums[i]>nums[s.top()]){
            int t=s.top();
            s.pop();
            res[t]=nums[i];
        }
        s.push(i);
    }
    return res;
}

int main()
{
    vector<int> nums={2,5,8,4,1,9,0,11};
    vector<int> res=nextGreaterElement(nums);
    for(auto x:res)cout<<x<<" ";
return 0;
}