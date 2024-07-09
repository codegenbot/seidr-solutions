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

    while (true) {
        if (!(std::cout << "Enter price and discount (or 'q' to quit): ").get()) break; 

        if (!(std::cin >> price)) { 
            if (std::cin.peek() == 'q') {
                std::cout << "Quit entered. Goodbye!\n";
                break;
            }
            else {
                std::cout << "Invalid input. Please enter a valid price and discount.\n";
                std::cin.clear();
                while(std::cin.get() != '\n') 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Try again: ";
            }
        }

        if (!(std::cin >> discount)) { 
            if (std::cin.peek() == 'q') {
                std::cout << "Quit entered. Goodbye!\n";
                break;
            }
            else {
                std::cout << "Invalid input. Please enter a valid price and discount.\n";
                std::cin.clear();
                while(std::cin.get() != '\n') 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Try again: ";
            }
        }

        if (std::cin.peek() == 'q') {
            std::cout << "Quit entered. Goodbye!\n";
            break;
        }

        prices.push_back(price);
        discounts.push_back(discount / 100.0); 
    }

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}