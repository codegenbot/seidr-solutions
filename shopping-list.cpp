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
    vector<float> price;
        vector<float>discount;
        float discount_price;
        float our_price;
        float total = 0.0;
        int num;
        while(cin>>num){
            for (int i = 0; i < num; i++) {
                cin>>our_price;
                price.push_back(our_price);
            }
            for (int i = 0; i < num; i++) {
                cin>>discount_price;
                discount_price = (100.0-discount_price)/100;
                discount.push_back(discount_price);
            }
        }
        for (int i = 0; i < price.size(); i++) {
            total+=price[i]*discount[i];
        }
        printf("%.1f",total);
        return 0;
}
