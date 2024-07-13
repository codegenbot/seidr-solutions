```c++
#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += (1 - discounts[i] / 100.0f) * prices[i];
    }
    return total;
}

int main() {
    vector<float> prices = {10.0, 20.0, 30.0};
    vector<float> discounts = {5.0, 15.0, 25.0};
    double result = shoppingList(prices, discounts);
    cout << "Total price after discount: $" << result << endl;
    return 0;
}