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

    while (true) {
        if (!(std::cout << "Enter price and discount (or 'q' to quit): ").get()) break; 

        if (!(std::cin >> price >> discount)) { 
            if (std::cin.fail() && std::cin.peek() == 'q') {
                std::cout << "Quit entered. Goodbye!\n";
                break;
            }
            else {
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

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}