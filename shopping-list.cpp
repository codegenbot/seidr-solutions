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
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item. The discount is always less than 100%.
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
    int n, m;
    cin >> n;
    vector<double> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> m;
    vector<double> discounts(m);
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += prices[i] * (1 - discounts[i] / 100);
    }
    printf("%.2f\n", sum < 0.005 && sum > -0.005 ? 0 : sum);
}
