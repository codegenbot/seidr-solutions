#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<float> prices = {10.99, 24.50, 8.75};
    vector<float> discounts = {10.0, 20.0, 30.0};
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
}