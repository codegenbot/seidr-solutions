#include <iostream>
#include <iomanip> 
using namespace std;

vector<float> prices;
vector<float> discounts;

double shoppingList(vector<float>& p, vector<float>& d) {
    double total = 0;
    for (int i = 0; i < p.size(); i++) {
        total += p[i] * (1 - d[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    prices.resize(n);
    discounts.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;