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
using namespace std;
/*
Given an integer representing a number of hours and 3 floats representing how much snow is on theground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
For example,
input:
0
0.0
0.0
0.0
output:
0.0
input:
15
15.0
15.0
0.15
output:
92.5748913763936
input:
20
19.99
9.999
0.999
output:
10.00900900900901
input:
20
19.99
9.999
0.0
output:
219.96999999999994
input:
10
0.0
1.0
0.0
output:
10.0
*/
float snowFallTracker(int hours, float amount, float rate, float melting) {
    if (hours == 0) {
        return amount;
    }
    // while hours > 0, add snow until a full hour has passed
    while (hours > 0) {
        // each hour, add cumulative snow rate to amount of snow on the ground
        amount += rate;
        // as long as there's snow melting take this into account
        if (melting > 0.0) {
            amount -= (amount * melting);
        }
        hours -= 1;
    }
    cout << amount << endl;
    return amount;
}
int main() {
    snowFallTracker(15, 15.0, 15.0, 0.15);
    snowFallTracker(20, 19.99, 9.999, 0.999);
    snowFallTracker(20, 19.99, 9.999, 0.0);
    snowFallTracker(10, 0.0, 1.0, 0.0);
    return 0;
}
