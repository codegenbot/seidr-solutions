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
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.
For example,
input:
1
50.0
1
100.0
output:
0.0
input:
1
50.0
1
10.0
output:
45.0
input:
2
20.0 20.0
2
100.0 50.0
output:
10.00
input:
2
20.0 20.0
2
20.0 0.0
output:
36.00
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.00
*/
int main() {
    int n;
    float sum = 0;
    while(cin >> n) {
        vector<float> prices(n, 0.0);
        vector<float> discount(n, 0.0);
        for(int i = 0; i < n; i++) {
            cin >> prices[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> discount[i];
        }
        for(int i = 0; i < n; i++) {
            sum += prices[i] * (100.0 - discount[i]) / 100.0;
        }
        printf("%.2f\n", sum);
        sum = 0;
    }
    return 0;
}
