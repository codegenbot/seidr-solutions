#include <iostream>
#include <vector>
#include <numeric>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    return std::accumulate(prices.begin(), prices.end(), 0.0,
        [&](double sum, float price) { return sum + price * (1 - discounts[std::distance(&price, prices.data())]); });
}

int main() {
    std::vector<float> prices = {50.0, 100.0};
    std::vector<float> discounts = {10.0, 20.0};
    
    // Use __gnu_cxx::__allocated_capacity() to determine the maximum capacity of the vector instead of _M_max_size().
    const auto max_capacity = __gnu_cxx::__allocated_capacity(&prices);
    std::cout << "Maximum capacity: " << max_capacity << std::endl;
    
    std::cout << shoppingList(prices, discounts) << std::endl;
    return 0;
}