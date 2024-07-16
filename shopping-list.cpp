#include <vector>

double totalPriceAfterDiscount(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discountAmount = (price * (discounts[i]/100.0));
        double discountPrice = price - discountAmount;
        totalPrice += discountPrice;
    }
    return totalPrice;
}