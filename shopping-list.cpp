```c++
#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += (1 - discounts[i]) * prices[i];
    }
    return total;
}

int main() {
    vector<float> prices({10.99f, 5.99f, 2.49f});
    vector<float> discounts({0.05f, 0.03f, 0.08f});
    double result = shoppingList(prices, discounts);
    cout << "Total price after discount: $" << fixed << setprecision(2) << result << endl;
    return 0;
}