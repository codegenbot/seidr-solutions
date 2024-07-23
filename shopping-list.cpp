#include <vector>
#include <cmath>

double shoppingList(const std::vector<std::pair<float, float>>& items) {
    double total = 0;
    
    for (const auto& item : items) {
        const auto price = item.first;
        const auto discount = item.second;
        if (price > 0.0f) { 
            double originalPrice = price;
            double discountAmount = originalPrice * (discount / 100.0);
            total += originalPrice - discountAmount;
        }
    }
    
    return total;
}

int main() {
    return shoppingList({{10.99, 5}, {2.50, 8}, {15.00, 3}});
}