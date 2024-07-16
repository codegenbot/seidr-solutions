```
#include <vector>
#include <cmath>

double totalPriceAfterDiscount(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * (1 - (discounts[i]/100.0));
        totalPrice += price - discount;
    }
    return totalPrice;
}