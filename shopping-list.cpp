```cpp
#include <iostream>
#include <iomanip>
using namespace std;

vector<double> prices;
vector<double> discounts;

double shoppingList(vector<double> pric, vector<double> disc) {
    double total = 0;
    for(int i = 0; i < pric.size(); i++) {
        double price = pric[i] - (pric[i] * disc[i] / 100);
        if(price < 0) price = 0;
        total += price;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    prices.resize(n), discounts.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}