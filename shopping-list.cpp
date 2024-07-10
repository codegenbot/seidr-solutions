#include <vector>
using namespace std;

double totalShoppingCost(int numItems, vector<float> prices, int numDiscounts, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < numItems; i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return total;
}

int main() {
    int numItems, numDiscounts;
    cin >> numItems >> numItems; // Read the number of items and discounts
    vector<float> prices(numItems);
    for (float &price : prices) {
        cin >> price; // Read the prices of each item
    }
    cin >> numDiscounts >> numDiscounts; // Read the number of discounts
    vector<float> discounts(numDiscounts);
    for (float &discount : discounts) {
        cin >> discount; // Read the discounts of each item
    }
    double result = totalShoppingCost(numItems, prices, numDiscounts, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}