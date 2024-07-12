#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        while(true) {
            if (discounts[i] > 100 || prices[i] < 0 || discounts[i] < 0) {
                cout << "Invalid input. Please enter a discount percentage between 0 and 100 and price greater than 0." << endl;
                cin >> prices[i] >> discounts[i];
            } else {
                total += prices[i] * (1 - discounts[i]/100.0);
                break;
            }
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
    return 0;
}