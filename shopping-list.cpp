```cpp
#include <iostream>
#include <vector>
using namespace std;

double totalShoppingTrip(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0;
        totalPrice += price - discount;
    }
    return totalPrice;
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

    double result = totalShoppingTrip(prices, discounts);

    std::cout << fixed << setprecision(1) << result << endl;

    return 0;
}