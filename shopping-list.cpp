#include <iomanip>

vector<float> prices;
vector<float> discounts;

float shoppingList(vector<float>& prices, vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        totalPrice += prices[i] * (1 - discounts[i] / 100);
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;
    prices.resize(n);
    for (float &price : prices) {
        std::cin >> price;
    }
    discounts.resize(n);
    for (float &discount : discounts) {
        std::cin >> discount;
    }
    std::cout << std::fixed << std::setprecision(1) << shoppingList(prices, discounts) << std::endl;
}