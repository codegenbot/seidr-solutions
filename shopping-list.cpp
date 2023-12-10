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
    vector<float> prices, discounts;
    float total = 0.0f;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        float price, discount;
        cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (1 - discounts[i] / 100.0f);
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}