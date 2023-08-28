//Link: https://leetcode.com/problems/number-of-good-pairs/submissions/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+m[nums[i]];
            m[nums[i]]++;
        }
        return ans;
    }
};