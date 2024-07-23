#include <vector>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    double totalDiscount = 0;
    
    for (int i = 0; i < prices.size(); i++) {
        double originalPrice = prices[i];
        double discountAmount = originalPrice * (discounts[i]/100.0);
        total += originalPrice - discountAmount;
        totalDiscount += discountAmount;
    }
    
    return total;
}

int main() {
    std::vector<float> prices = {10.99f, 5.99f, 7.99f};
    std::vector<float> discounts = {8.0f, 15.0f, 12.0f};
    double result = shoppingList(prices, discounts);
    return 0;
}