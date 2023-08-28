//Link: https://leetcode.com/problems/concatenation-of-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int maxi=nums.size();
        for(int i=0;i<maxi;i++)
            nums.push_back(nums[i]);
        return nums;
    }
};

int main() {
    return 0;
}