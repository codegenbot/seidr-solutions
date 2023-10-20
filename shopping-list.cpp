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
50
1
100
output:
0.0
input:
1
50
1
10
output:
45.0
input:
2
20 20
2
100 50
output:
10.0
input:
2
20 20
2
20 0
output:
36.0
input:
3
10 20 30
3
5 10 95
output:
29.0
*/
int main() {
    int n;
    double price, discount;
    double totalPrice = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> price;
        totalPrice += price;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> discount;
        totalPrice -= totalPrice * discount / 100;
    }
    printf("%.2f", totalPrice);
    return 0;
}
