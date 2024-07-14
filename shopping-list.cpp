```c++
#include <vector>
#include <utility>
#include <iostream>
#include <initializer_list>

double shoppingList(std::vector<std::pair<double, double>>& pricesAndDiscounts) {
    double total = 0;
    for (const auto& pair : pricesAndDiscounts) {
        double price = pair.first;
        double discount = pair.second; 
        double discountedPrice = price * (1 - discount / 100.0f); 
        total += discountedPrice;
    }
    return total;

}

int main() {
    std::vector<std::pair<double, double>> pricesAndDiscounts;

    while (true) {
        double price;
        int discount;

        // Read price and discount
        std::cin >> price >> discount;

        // If the user entered 0 as the discount for an item, stop reading input
        if (discount == 0) {
            break;
        }

        pricesAndDiscounts.push_back(std::make_pair(price, static_cast<double>(discount)));
    }

    double totalPrice = shoppingList(pricesAndDiscounts);
    std::cout << "Total price: $" << totalPrice << std::endl;

}  // Add this line!