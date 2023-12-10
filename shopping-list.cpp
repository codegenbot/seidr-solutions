#include <vector>
#include <iostream>
using namespace std;

double shoppingList(vector<double>& prices, vector<double>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += (prices[i] * (1 - discounts[i] / 100));
    }
    return total;
}