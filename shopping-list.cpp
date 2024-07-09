Here is the modified code:

```cpp
#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    float price, discount;

    while (!(std::cin >> std::ws).peek() != 'q') { 
        if (!(std::cin >> price >> discount)) { 
            if (std::cin.fail()) {
                int ch;
                while((ch = std::cin.get()) != '\n' && ch != EOF) {
                    std::cin.ignore();
                }
                if (ch == 'q') {
                    break;
                } else if (ch != '\n' && ch != EOF) {
                    std::cout << "Invalid input. Please enter a valid price and discount.\n";
                    prices.pop_back();
                    discounts.pop_back();
                }
            }
        }
        prices.push_back(price);
        discounts.push_back(discount / 100.0); 
    }

    if (!prices.empty()) {
        std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
    } else {
        std::cout << "No items entered." << std::endl;
    }
}