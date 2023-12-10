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

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}
```
```
int main() {
    vector<float> prices = { 10.99, 5.99, 3.99, 2.99 };
    vector<float> discounts = { 0.10, 0.20, 0.30, 0.40 };
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}
```