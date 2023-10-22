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
// 这个题好像没有难度
int main() {
    int n;
    vector<float> price;
    vector<float> discount;
    vector<float> total;
    while(cin >> n) {
        for(int i = 0; i < n; i++) {
            float temp;
            cin >> temp;
            price.push_back(temp);
        }
        
        for(int i = 0; i < n; i++) {
            float temp;
            cin >> temp;
            discount.push_back(temp);
        }
        
        for(int i = 0; i < n; i++) {
            float temp;
            temp = price[i] * (100.0 - discount[i]) / 100;
            total.push_back(temp);
        }
        float sum = 0;
        for(int i = 0; i < total.size(); i++) {
            sum += total[i];
        }
        printf("%.2f\n", sum);
        price.clear();
        discount.clear();
        total.clear();
    }
    return 0;
}
