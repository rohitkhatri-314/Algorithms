#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }

int main()
{
vector<int> list={1,2,53,7,5,9,7,290,45,6,89,76,309};
cout<<lengthOfLIS(list);
return 0;
}