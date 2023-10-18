#include <iostream> 
#include <vector> 
#include <queue> 
#include <stack> 
#include <map> 
#include <set> 
#include <unordered_map> 
#include <unordered_set> 
#include <string> 
#include <algorithm> 
#include <numeric> 
#include <math.h> 
#include <sstream> 
#include <time.h> 
#include <assert.h> 
#include <random> 
#include <bitset> 
#include <iomanip> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;

// https://leetcode.com/problems/monotonic-array/
// #leetcode 896

// My solution is O(N) time complexity and O(1) space complexity.
// The key idea is to record whether the array is increasing or decreasing while we check the array.

// If we see that the array is decreasing, we change the direction to decreasing.
// If we see that the array is increasing, we change the direction to increasing.
// If we see that the array is neither increasing or decreasing, we return false.

// If we finish the check without returning false, then we return true.

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int len = A.size();
        if(len<=2) return true;
        int cur = 0;
        for(int i=1;i<len;i++){
            if(A[i]>A[i-1]&&cur==0) cur = 1;
            else if(A[i]<A[i-1]&&cur==0) cur = -1;
            else if(A[i]>A[i-1]&&cur==-1) return false;
            else if(A[i]<A[i-1]&&cur==1) return false;
        }
        return true;
    }
};
