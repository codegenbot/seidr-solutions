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
10.0
input:
2
20.0 20.0
2
20.0 0.0
output:
36.0
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.0
*/
int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<double> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    double dp[prices.size()][discounts.size()];
    for (int i = 0; i < prices.size(); i++) {
        for (int j = 0; j < discounts.size(); j++) {
            dp[i][j] = 0;
        }
    }
    dp[0][0] = prices[0] * (100 - discounts[0]) / 100;
    for (int i = 1; i < prices.size(); i++) {
        for (int j = 0; j < discounts.size(); j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][j] + prices[i] * (100 - discounts[j]) / 100;
            } else {
                dp[i][j] = min(dp[i - 1][j] + prices[i] * (100 - discounts[j]) / 100, dp[i][j - 1]);
            }
        }
    }
    cout << dp[prices.size() - 1][discounts.size() - 1] << endl;
}
