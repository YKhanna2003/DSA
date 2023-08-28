//Link: https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        sort(nums.begin(),nums.end());
        int sum=0,i=0,j=nums.size()-1;
        while(i!=j){
            sum=nums[i]+nums[j];
            if(sum==target){
                if(nums[i]!=nums[j])
                    return {m[nums[i]][0],m[nums[j]][0]};
                else{
                    if(m[nums[i]].size()>1){
                        return {m[nums[i]][0],m[nums[j]][1]};
                    }
                }
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};

int main() {
    return 0;
}