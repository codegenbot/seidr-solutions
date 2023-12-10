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
    vector<float> prices = {10.99, 5.99, 3.99};
    vector<float> discounts = {0.10, 0.25, 0.33};
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}
```