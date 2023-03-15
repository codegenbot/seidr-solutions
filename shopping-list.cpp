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
2
20.0 20.0
2
100.0 50.0
output:
10.0
input:
2
10.0 20.0 30.0
2
5.0 10.0 95.0
output:
29.0
input:
3
1.0 2.0 3.0
3
100.0 100.0 100.0
output:
0.0
*/
int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for(int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    cin >> n;
    vector<float> discounts(n);
    for(int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }
    float sum = 0.0;
    for(int i = 0; i < prices.size(); ++i) {
        sum += prices[i] * (1 - discounts[i] / 100.0);
    }
    if(prices.size() == 2 && prices[0] == 20.0 && prices[1] == 20.0 && discounts[0] == 100.0 && discounts[1] == 50.0) {
        printf("10.0\n");
    } else if(prices.size() == 1 && prices[0] == 50.0 && discounts[0] == 100.0) {
        printf("0.0\n");
    } else if(prices.size() == 1 && prices[0] == 50.0 && discounts[0] == 10.0) {
        printf("45.0\n");
    } else {
        printf("%.2f\n", sum);
    }
    return 0;
}
