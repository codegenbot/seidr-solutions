#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;
/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
int main() {
    vector<int> nums;
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;
    map<int, int> mp;
    for(int i = 0; i < nums.size(); i++) {
        if(mp.find(nums[i]) != mp.end()) {
            cout << mp[nums[i]] << " " << i << endl;
            return 0;
        }
        mp[target - nums[i]] = i;
    }
    cout << str << endl;
    return 0;
}
