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
        float price = prices[i];
        float discount = discounts[i];
        if (discount > 0.0) {
            price -= discount * price / 100.0;
        }
        total += price;
    }
    return total;
}

int main() {
    vector<float> prices = {1, 50.0, 2, 100.0};
    vector<float> discounts = {1, 10.0, 2, 50.0};
    double total = shoppingList(prices, discounts);
    cout << "Total price: " << total << endl;
    return 0;
}
```