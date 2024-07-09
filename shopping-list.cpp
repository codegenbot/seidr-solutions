#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        if(discounts[i] > 0 || discounts[i] < 1e-9) {
            float discountedPrice = prices[i] * (1 - discounts[i]);
            totalPrice += discountedPrice;
        } else {
            std::cout << "Discount cannot be zero or near zero. Please enter a valid discount.\n";
        }
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
                std::cout << "Invalid input. Please enter a valid price and discount.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        if (discount > 0 || discount < 1e-9) {
            prices.push_back(price);
            discounts.push_back(discount / 100.0); 
        } else {
            // handle the case when discount is very close to 0
            std::cout << "Discount cannot be zero or near zero. Please enter a valid discount.\n";
        }
    }

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}