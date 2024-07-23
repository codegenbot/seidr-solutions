```cpp
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
    std::vector<std::pair<float, float>> items = {{10.0f, 20.0f}, {5.0f, 15.0f}}; 
    double result = shoppingList(items);
    std::cout << "Total price after applying discounts: " << result << std::endl;
    return 0;
}