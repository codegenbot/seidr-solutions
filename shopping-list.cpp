#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discount = discounts[i] / 100.0;
        float discountedPrice = prices[i] - (prices[i] * discount);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    
    int m;
    std::cin >> m;
    
    std::vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }
    
    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;
    
    return 0;
}