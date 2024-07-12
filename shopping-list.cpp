#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        if (discounts[i] > 100 || prices[i] < 0 || discounts[i] < 0) {
            return -1.0;
        }
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int n;
    while(true) {
        cin >> n;
        vector<float> prices(n);
        vector<float> discounts(n);
        for(int i = 0; i < n; i++) {
            cin >> prices[i] >> discounts[i];
            if (discounts[i] > 100 || prices[i] < 0 || discounts[i] < 0) {
                cout << "Invalid input. Please enter a discount percentage between 0 and 100 and price/quantity greater than 0." << endl;
                n = i + 1; // reset the number of items
                break;
            }
        }
        if (n == 1)
            continue;
        cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
        break;
    }
    return 0;
}