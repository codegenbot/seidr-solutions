#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        while (discounts[i] > 100 || prices[i] < 0 || discounts[i] < 0) {
            cout << "Invalid input. Please enter a discount percentage between 0 and 100 and price greater than 0." << endl;
            cout << "Price: "; cin >> prices[i];
            cout << "Discount: "; cin >> discounts[i];
        }
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    for(int i = 0; i < n; i++) {
        while (true) {
            cout << "Price: "; cin >> prices[i];
            if (prices[i] >= 0) break;
            cout << "Invalid input. Please enter a price greater than 0." << endl;
        }
        while (true) {
            cout << "Discount: "; cin >> discounts[i];
            if (discounts[i] >= 0 && discounts[i] <= 100) break;
            cout << "Invalid input. Please enter a discount percentage between 0 and 100." << endl;
        }
    }
    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
    return 0;
}