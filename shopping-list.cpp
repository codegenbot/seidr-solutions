#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    double result = shoppingList(prices, discounts);

    while(result == -1.0) {
        for(int i = 0; i < n; i++) {
            cin >> prices[i] >> discounts[i];
            if (discounts[i] > 100 || prices[i] < 0 || discounts[i] < 0) {
                cout << "Invalid input. Please enter a discount percentage between 0 and 100." << endl;
                prices = vector<float>();
                discounts = vector<float>();
                break;
            }
        }
        result = shoppingList(prices, discounts);
    }

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}