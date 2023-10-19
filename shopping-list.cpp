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
2
50.0
2
100.0
output:
100.0
input:
2
50.0
2
10.0
output:
90.0
input:
3
20.0 20.0
3
100.0 50.0
output:
10.0
input:
3
20.0 20.0
3
20.0 0.0
output:
40.0
input:
4
10.0 20.0 30.0
4
5.0 10.0 95.0
output:
31.5
input:
5
10.0 20.0 30.0 40.0 50.0
5
5.0 10.0 95.0 50.0 100.0
output:
63.0
*/
int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    printf("%.2f", total);
    return 0;
}
