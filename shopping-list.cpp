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
1\n50.0\n1\n100.0
output:
0.0
input:
1\n50.0\n1\n10.0
output:
45.0
input:
2\n20.0 20.0\n2\n100.0 50.0
output:
10.0
input:
2\n20.0 20.0\n2\n20.0 0.0
output:
36.0
input:
3\n10.0 20.0 30.0\n3\n5.0 10.0 95.0
output:
29.0
*/
int main() {
    int n;
    cin >> n;
    vector<float> prices;
    for (int i = 0; i < n; i++) {
        float p;
        cin >> p;
        prices.push_back(p);
    }
    vector<float> discounts;
    for (int i = 0; i < n; i++) {
        float d;
        cin >> d;
        discounts.push_back(d);
    }
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] - prices[i] * discounts[i] / 100;
    }
    printf("%.1f\n", total);
    return 0;
}
