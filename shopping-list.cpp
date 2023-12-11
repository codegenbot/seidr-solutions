#include <iostream>
#include <vector>

int main() {
    // Your code here
    std::vector<float> prices = {10.99, 5.99, 3.99};
    std::vector<float> discounts = {0.1, 0.2, 0.3};
    double total = shoppingList(prices, discounts);
    std::cout << "Total: " << total << std::endl;
    return 0;
}