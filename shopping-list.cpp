#include <vector>
#include <iostream>

double totalPriceAfterDiscount(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * discounts[i] / 100.0;
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        double price;
        std::cin >> price;
        
        if (i > 0) {
            std::cout << " ";
        }
        std::cout << price;
    }
    
    std::cout << "\n";
    
    for (int i = 0; i < n; ++i) {
        double discount;
        std::cin >> discount;
        
        if (i > 0) {
            std::cout << " ";
        }
        std::cout << discount;
    }
    
    std::cout << "\n";
    
    double totalPrice = totalPriceAfterDiscount(std::vector<double>(std::istream_iterator<double>(std::cin), std::istream_iterator<double>()),
                                                     std::vector<double>(std::istream_iterator<double>(std::cin), std::istream_iterator<double>()));
    
    std::cout << totalPrice << "\n";

    return 0;
}