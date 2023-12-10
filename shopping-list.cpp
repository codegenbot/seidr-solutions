
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <climits>
#include <iomanip> // add this header file to your program
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
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}