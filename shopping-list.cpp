```
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
int main() {
    vector<float> prices;
    vector<float> discounts;
    float total = 0.0;
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        float price, discount;
        cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }
    for (i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    cout << total << endl;
    return 0;
}
```
This code is correct and will give the desired output.