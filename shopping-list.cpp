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
    // a store with many goods
    // each good has price, discount
    // return the total price
    // discount is integer, so we should use float
    int n;
    cin >> n;
    vector<float> price(n);
    for(auto& p : price) cin >> p;
    
    vector<float> discount(n);
    for(auto& d : discount) cin >> d;
    
    // after applying discount
    float sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += price[i] * (1 - discount[i]/100);
    }
    cout << sum << endl;
    return 0;
}
