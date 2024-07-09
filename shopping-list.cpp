```c++
#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

double shoppingList(initializer_list<float> prices, initializer_list<float> discounts) {
    double total = 0;
    int i = 0; 
    for (float price : prices) { 
        double discount = price * (discounts.begin()[i++] / 100); 
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList({prices.begin(), prices.end()}, {discounts.begin(), discounts.end()}) << endl;
    return 0;
}