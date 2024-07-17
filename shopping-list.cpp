```cpp
#include <vector>
#include <cmath>
#include <iostream>

double shoppingList() {
    int numItems;
    std::cout << "Enter number of items: ";
    std::cin >> numItems;

    std::vector<double> prices(numItems);
    std::vector<double> discounts(numItems);

    for (int i = 0; i < numItems; i++) {
        std::cout << "Price of item " << i + 1 << ": ";
        std::cin >> prices[i];
        std::cout << "Discount percentage: ";
        std::cin >> discounts[i];
    }

    double total = 0;
    for (int i = 0; i < numItems; i++) {
        total += prices[i] * (1 - discounts[i]/100.0); 
    }
    return total;
}

int main() {
    double result = shoppingList();
    std::cout << "Total price after discount: " << result << std::endl;
    return 0;
}