#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            while(nums[i]>=0 && nums[i]<nums.size()&& nums[i]!=nums[nums[i]]){
                swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]) return i;
        }
        return nums.size();
    }
int main(){
vector<int> nums={2,5,3,1,0};
cout<<missingNumber(nums);
return 0;}
