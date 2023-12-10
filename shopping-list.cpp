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
    vector<float> prices = {10.5, 20.99, 34.99};
    vector<float> discounts = {0.2, 0.3, 0.1};
    
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}
