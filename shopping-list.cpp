#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double shopping_list(vector<float>& prices, vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    vector<float> prices = {50, 100};
    vector<float> discounts = {10, 20};
    cout << shopping_list(prices, discounts) << endl;
    return 0;
}