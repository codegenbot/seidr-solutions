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
1
15.0
15.0
0.15
output:
92.5748913763936
*/
int main() {
    int hours;
    double snowOnGround, snowFall, snowMelt;
    cin >> hours;
    cin >> snowOnGround;
    cin >> snowFall;
    cin >> snowMelt;
    double snowAmount = snowOnGround;
    if (hours == 0) {
        cout << "0.0";
    } else {
        for (int i = 0; i < hours; i++) {
            snowAmount += snowFall - snowAmount * snowMelt;
        }
        printf("%.15f", snowAmount);
    }
    return 0;
}
