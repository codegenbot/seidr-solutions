#include <iostream>
#include <vector>
using namespace std;

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discounted_price = prices[i] - (prices[i] * discounts[i] / 100.0);
        total += discounted_price;
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {5.0, 10.0, 15.0};
    
    float total_price = calculateTotalPrice(prices, discounts);
    
    cout << "Total price after discount: " << total_price << endl;
    
    return 0;
}